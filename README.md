<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>واجباتي ومشاريعي</title>
  <link href="https://fonts.googleapis.com/css2?family=Cairo:wght@400;700&display=swap" rel="stylesheet">
  <style>
    body {
      font-family: 'Cairo', sans-serif;
      background: linear-gradient(to right, #f0f2f5, #e2e8f0);
      color: #2d3748;
      margin: 0;
      padding: 20px;
    }

    .container {
      max-width: 800px;
      background-color: #ffffff;
      margin: 40px auto;
      padding: 30px;
      border-radius: 15px;
      box-shadow: 0 10px 25px rgba(0, 0, 0, 0.1);
    }

    h1 {
      color: #2c3e50;
      font-size: 2rem;
      margin-bottom: 10px;
    }

    h2 {
      color: #4a5568;
      margin-top: 30px;
    }

    ul {
      padding-right: 20px;
      line-height: 1.8;
    }

    .note {
      background-color: #fffbea;
      padding: 15px;
      border: 1px solid #ffeeba;
      border-radius: 10px;
      margin-top: 20px;
      font-size: 0.95rem;
      color: #8a6d3b;
    }

    .code-block {
      background-color: #2d2d2d;
      color: #f8f8f2;
      padding: 15px;
      border-radius: 10px;
      margin-top: 20px;
      direction: ltr;
      overflow-x: auto;
      font-family: 'Courier New', monospace;
      font-size: 14px;
    }

    .footer {
      text-align: center;
      margin-top: 40px;
      color: #718096;
      font-size: 0.9rem;
    }
  </style>
</head>
<body>

  <div class="container">
    <h1>📚 واجباتي ومشاريعي البسيطة</h1>

    <p>
      مرحبًا! هذه الصفحة تحتوي على بعض من الواجبات المنزلية والمشاريع البسيطة اللي سويتها خلال دراستي في السنة الثانية.
    </p>

    <h2>🔹 المحتوى:</h2>
    <ul>
      <li>أكواد بسيطة للتدريب</li>
      <li>واجبات من الجامعة</li>
      <li>مشاريع تجريبية صغيرة</li>
    </ul>

    <h2>🧠 مثال على كود C++ معقد نوعًا ما:</h2>
    <div class="code-block">
<pre><code>#include &lt;iostream&gt;
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base = 2, exponent = 5;
    cout &lt;&lt; base &lt;&lt; "^" &lt;&lt; exponent &lt;&lt; " = " &lt;&lt; power(base, exponent) &lt;&lt; endl;
    return 0;
}
</code></pre>
    </div>

    <div class="note">
      ⚠️ <strong>ملاحظة:</strong> كل شيء هنا لغرض التعلم فقط.
    </div>

    <div class="footer">
      &copy; 2025 - طالب سنة ثانية
    </div>
  </div>

</body>
</html>
