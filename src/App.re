type route = 
  | Home
  | Test;

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  <>
    <SideBar />
    {switch (url.path) {
    | [] => <Main />
    | ["test"] => <Test />
    | _ => <Main />
    };}
  </>
};
