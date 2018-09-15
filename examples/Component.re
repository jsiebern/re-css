module Css = ComponentStyles;

let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~size, ~animate, _) => {
  ...component,
  render: _ =>
    <div className=Css.container>
      <div className=Css.shape>
        <div
          className={
            Cx.merge([|Css.text(~size), Css.animated->Cn.ifTrue(animate)|])
          }>
          "Hi!"->ReasonReact.string
        </div>
      </div>
      <div className=Css.note>
        {j|↑ Hover it ↑|j}->ReasonReact.string
      </div>
    </div>,
};