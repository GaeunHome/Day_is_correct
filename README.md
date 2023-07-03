# 日日是好日
<div data-step="14" data-intro="<p>描述中 <i class='fa fa-clipboard'></i> 按鈕可協助你複製到剪貼簿，並貼到本機實驗。</p> <p>若題目有特殊的字元格式，那在範例輸入/輸出測資不適用複製貼上，請務必小心</p>">
<p>請撰寫一個程式，讀取輸入，判斷該日期是否為一個合法的西元後(Anno Domini, A.D.)日期。</p>
<p>輸入格式：輸入只有一行(row)。合法的格式是：</p>
<ul>
<li>以一個符號<code>#</code>區隔的3個數字Y，M，D</li>
<li>Y,M,D分別代表西元的年，月，日</li>
<li>Y大於等於0，且M，D都必須是超過0的數字(M&gt;0且D&gt;0)</li>
</ul>
<p>測試資料中，無論格式是否合法，輸入資料的Y，M，D之間一定只有一個字元。</p>
<p>輸出格式: 根據輸入行數，每一行輸出整數0或1。</p>
<ul>
<li>1：表示該輸入是合法的西元後日期</li>
<li>0：表示該日期不是合法的西元後日期</li>
</ul>
<p>程式必須(只需要)檢查以下幾個部份，以確認日期格式是否正確</p>
<ol>
<li>分隔符號</li>
<li>年, 月, 日範圍</li>
</ol>
<h3 class="content-subhead">Inpue Example 1</h3><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_610715" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">1789#5#5</code></div></div></td></tr></tbody></table></div></code></pre>
<p>上述前兩行分別是一正確格式表示的西元1789年5月5日</p>
<h3 class="content-subhead">Outpue Example 1</h3><p>上述輸入格式正確。故輸出：</p><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_969404" class="syntaxhighlighter nogutter "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">1</code></div></div></td></tr></tbody></table></div></code></pre>
<h3 class="content-subhead">Inpue Example 2</h3><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_698177" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">1789#-5 5</code></div></div></td></tr></tbody></table></div></code></pre>
<p>上述日期格式的分隔符號錯誤，且月份數值錯誤。</p>
<h3 class="content-subhead">Outpue Example 2</h3><p>上述輸入格式錯誤。故輸出：</p>
<pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_530277" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">0</code></div></div></td></tr></tbody></table></div></code></pre></div>
