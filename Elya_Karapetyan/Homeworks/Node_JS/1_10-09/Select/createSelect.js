var constants = require("./constants");

function getSelectedOption() {
    alert (this.options[this.selectedIndex].text);
}

exports.creatSelect = function() {
  const optionsList = constants.getOptionsList();
   
  let selectTag = "<select onchange=`getSelectedOption()`>"
  let closeSelectTag = "</select>";
  let optionTag = "<option>";
  let closeOptionTag = "</option>";
  let select = selectTag;
  for (let i = 0; i < optionsList.length; ++i) {
    select += optionTag + optionsList[i] + closeOptionTag;
  }
  select += closeOptionTag;
  return select;
};
