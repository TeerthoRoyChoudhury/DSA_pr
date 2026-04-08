<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8"/>
<meta name="viewport" content="width=device-width, initial-scale=1.0"/>
<title>DSA Practice</title>
<link href="https://fonts.googleapis.com/css2?family=JetBrains+Mono:wght@400;500;700&family=Syne:wght@400;600;700;800&display=swap" rel="stylesheet"/>
<style>
  *, *::before, *::after { box-sizing: border-box; margin: 0; padding: 0; }

  :root {
    --bg: #ffffff;
    --bg-secondary: #f5f5f3;
    --bg-tertiary: #eeede9;
    --text-primary: #1a1a18;
    --text-secondary: #5a5a56;
    --text-tertiary: #9a9a94;
    --border: rgba(0,0,0,0.1);
    --border-secondary: rgba(0,0,0,0.18);
    --radius-md: 8px;
    --radius-lg: 12px;
  }

  @media (prefers-color-scheme: dark) {
    :root {
      --bg: #1a1a18;
      --bg-secondary: #242422;
      --bg-tertiary: #2e2e2b;
      --text-primary: #f0efe8;
      --text-secondary: #a0a09a;
      --text-tertiary: #666660;
      --border: rgba(255,255,255,0.1);
      --border-secondary: rgba(255,255,255,0.18);
    }
    .badge-lang { background: #0C447C !important; color: #B5D4F4 !important; }
    .badge-status { background: #27500A !important; color: #C0DD97 !important; }
    .badge-focus { background: #712B13 !important; color: #F5C4B3 !important; }
    .pi-blue { background: #0C447C !important; }
    .pi-teal { background: #085041 !important; }
    .pi-amber { background: #633806 !important; }
  }

  body {
    font-family: 'Syne', sans-serif;
    background: var(--bg);
    color: var(--text-primary);
    min-height: 100vh;
    padding: 2rem 1.5rem 4rem;
    display: flex;
    justify-content: center;
  }

  .readme {
    width: 100%;
    max-width: 780px;
  }

  /* HERO */
  .hero {
    border-bottom: 0.5px solid var(--border);
    padding: 2.5rem 0 2rem;
    margin-bottom: 2rem;
  }

  .hero-eyebrow {
    font-family: 'JetBrains Mono', monospace;
    font-size: 11px;
    color: var(--text-tertiary);
    letter-spacing: 0.12em;
    text-transform: uppercase;
    margin-bottom: 1rem;
  }

  .hero-title {
    font-size: 42px;
    font-weight: 800;
    line-height: 1.05;
    letter-spacing: -0.02em;
    margin-bottom: 1.25rem;
    color: var(--text-primary);
  }

  .hero-title span { color: var(--text-tertiary); }

  .badge-row {
    display: flex;
    gap: 8px;
    flex-wrap: wrap;
    margin-bottom: 1.5rem;
  }

  .badge {
    font-family: 'JetBrains Mono', monospace;
    font-size: 11px;
    font-weight: 500;
    padding: 4px 10px;
    border-radius: 4px;
    letter-spacing: 0.04em;
    display: flex;
    align-items: center;
    gap: 6px;
  }

  .badge-dot {
    width: 6px;
    height: 6px;
    border-radius: 50%;
    flex-shrink: 0;
  }

  .badge-lang { background: #E6F1FB; color: #0C447C; }
  .badge-lang .badge-dot { background: #378ADD; }
  .badge-status { background: #EAF3DE; color: #3B6D11; }
  .badge-status .badge-dot { background: #639922; }
  .badge-focus { background: #FAECE7; color: #993C1D; }
  .badge-focus .badge-dot { background: #D85A30; }

  .hero-desc {
    font-size: 15px;
    color: var(--text-secondary);
    line-height: 1.6;
    max-width: 520px;
  }

  /* STATS */
  .stat-row {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 8px;
    margin-top: 1.5rem;
  }

  .stat-card {
    background: var(--bg-secondary);
    border-radius: var(--radius-md);
    padding: 14px 16px;
    text-align: center;
  }

  .stat-num {
    font-size: 22px;
    font-weight: 700;
    font-family: 'JetBrains Mono', monospace;
    color: var(--text-primary);
    margin-bottom: 4px;
  }

  .stat-label {
    font-size: 11px;
    color: var(--text-tertiary);
    letter-spacing: 0.06em;
    text-transform: uppercase;
  }

  /* SECTIONS */
  .section { margin-bottom: 2.5rem; }

  .section-label {
    font-family: 'JetBrains Mono', monospace;
    font-size: 10px;
    letter-spacing: 0.16em;
    text-transform: uppercase;
    color: var(--text-tertiary);
    margin-bottom: 1rem;
    padding-bottom: 0.5rem;
    border-bottom: 0.5px solid var(--border);
  }

  /* TOPICS */
  .topics-grid {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(160px, 1fr));
    gap: 8px;
  }

  .topic-card {
    background: var(--bg-secondary);
    border-radius: var(--radius-md);
    padding: 14px 16px;
    cursor: default;
    transition: background 0.15s;
    position: relative;
    overflow: hidden;
  }

  .topic-card:hover { background: var(--bg-tertiary); }
  .topic-card:hover .topic-arrow { opacity: 1; transform: translateX(0); }

  .topic-num {
    font-family: 'JetBrains Mono', monospace;
    font-size: 10px;
    color: var(--text-tertiary);
    margin-bottom: 6px;
  }

  .topic-name {
    font-size: 13px;
    font-weight: 600;
    color: var(--text-primary);
    letter-spacing: 0.01em;
  }

  .topic-arrow {
    position: absolute;
    top: 14px;
    right: 14px;
    font-size: 12px;
    color: var(--text-tertiary);
    opacity: 0;
    transform: translateX(-4px);
    transition: all 0.15s;
  }

  /* PURPOSE */
  .purpose-list { display: flex; flex-direction: column; gap: 10px; }

  .purpose-item {
    display: flex;
    align-items: flex-start;
    gap: 14px;
    padding: 12px 16px;
    background: var(--bg-secondary);
    border-radius: var(--radius-md);
  }

  .purpose-icon {
    width: 28px;
    height: 28px;
    border-radius: 6px;
    flex-shrink: 0;
    display: flex;
    align-items: center;
    justify-content: center;
  }

  .purpose-icon svg { width: 14px; height: 14px; }

  .pi-blue { background: #E6F1FB; }
  .pi-teal { background: #E1F5EE; }
  .pi-amber { background: #FAEEDA; }

  .purpose-text {
    font-size: 13px;
    color: var(--text-secondary);
    line-height: 1.5;
    padding-top: 5px;
  }

  /* NOTES */
  .notes-list { display: flex; flex-direction: column; gap: 6px; }

  .note-item {
    font-size: 13px;
    color: var(--text-secondary);
    padding: 10px 14px;
    border-left: 2px solid var(--border-secondary);
    line-height: 1.5;
  }

  /* TECH */
  .tech-block {
    background: var(--bg-secondary);
    border-radius: var(--radius-lg);
    padding: 1.25rem 1.5rem;
    display: flex;
    align-items: center;
    gap: 1.25rem;
  }

  .cpp-logo {
    width: 44px;
    height: 44px;
    border-radius: 10px;
    background: #378ADD;
    display: flex;
    align-items: center;
    justify-content: center;
    font-family: 'JetBrains Mono', monospace;
    font-size: 13px;
    font-weight: 700;
    color: #fff;
    flex-shrink: 0;
  }

  .tech-name {
    font-size: 15px;
    font-weight: 700;
    margin-bottom: 3px;
    color: var(--text-primary);
  }

  .tech-sub {
    font-size: 12px;
    color: var(--text-tertiary);
    font-family: 'JetBrains Mono', monospace;
  }
</style>
</head>
<body>
<div class="readme">

  <div class="hero">
    <div class="hero-eyebrow">github / dsa-practice</div>
    <h1 class="hero-title">DSA<br/><span>Practice</span></h1>
    <div class="badge-row">
      <div class="badge badge-lang"><div class="badge-dot"></div>C++</div>
      <div class="badge badge-status"><div class="badge-dot"></div>Active</div>
      <div class="badge badge-focus"><div class="badge-dot"></div>DSA</div>
    </div>
    <p class="hero-desc">A curated collection of data structures and algorithms problems — solved for clarity, correctness, and continuous growth.</p>
    <div class="stat-row">
      <div class="stat-card">
        <div class="stat-num">8</div>
        <div class="stat-label">Topics</div>
      </div>
      <div class="stat-card">
        <div class="stat-num">C++</div>
        <div class="stat-label">Language</div>
      </div>
      <div class="stat-card">
        <div class="stat-num">∞</div>
        <div class="stat-label">In progress</div>
      </div>
    </div>
  </div>

  <div class="section">
    <div class="section-label">Topics covered</div>
    <div class="topics-grid">
      <div class="topic-card"><div class="topic-num">01</div><div class="topic-name">Arrays</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">02</div><div class="topic-name">2D Arrays</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">03</div><div class="topic-name">Recursion</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">04</div><div class="topic-name">HashMap</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">05</div><div class="topic-name">Sorting</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">06</div><div class="topic-name">Patterns</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">07</div><div class="topic-name">Basic Math</div><div class="topic-arrow">→</div></div>
      <div class="topic-card"><div class="topic-num">08</div><div class="topic-name">STL</div><div class="topic-arrow">→</div></div>
    </div>
  </div>

  <div class="section">
    <div class="section-label">Purpose</div>
    <div class="purpose-list">
      <div class="purpose-item">
        <div class="purpose-icon pi-blue">
          <svg viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
            <path d="M8 2L14 5V11L8 14L2 11V5L8 2Z" stroke="#378ADD" stroke-width="1.5" stroke-linejoin="round"/>
          </svg>
        </div>
        <div class="purpose-text">Sharpen problem-solving skills through deliberate, structured practice</div>
      </div>
      <div class="purpose-item">
        <div class="purpose-icon pi-teal">
          <svg viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
            <circle cx="8" cy="8" r="5.5" stroke="#1D9E75" stroke-width="1.5"/>
            <path d="M8 5.5V8.5L10 10" stroke="#1D9E75" stroke-width="1.5" stroke-linecap="round"/>
          </svg>
        </div>
        <div class="purpose-text">Build and reinforce a solid foundation in DSA fundamentals</div>
      </div>
      <div class="purpose-item">
        <div class="purpose-icon pi-amber">
          <svg viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg">
            <path d="M3 12L6 8L9 10L13 5" stroke="#BA7517" stroke-width="1.5" stroke-linecap="round" stroke-linejoin="round"/>
          </svg>
        </div>
        <div class="purpose-text">Track incremental progress over time with a regularly updated log</div>
      </div>
    </div>
  </div>

  <div class="section">
    <div class="section-label">Notes</div>
    <div class="notes-list">
      <div class="note-item">Solutions prioritize clarity and correctness above all else</div>
      <div class="note-item">Multiple approaches included where alternatives are instructive</div>
      <div class="note-item">Repository is actively maintained and updated regularly</div>
    </div>
  </div>

  <div class="section">
    <div class="section-label">Tech</div>
    <div class="tech-block">
      <div class="cpp-logo">C++</div>
      <div>
        <div class="tech-name">C++ (Modern)</div>
        <div class="tech-sub">primary language · STL · standard competitive setup</div>
      </div>
    </div>
  </div>

</div>
</body>
</html>
