[@react.component]
let make = () => {
  <nav>
    <h1>{React.string("Danilo Macedo Bakun")}</h1>
    <ul>
      <li><Link href="/" name="Home" /></li>
      <li><Link href="/test" name="Test" /></li>
    </ul>
  </nav>
};
