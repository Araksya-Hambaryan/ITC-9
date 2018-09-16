var fs = require('fs');
exports.createFolder = function (dirPath) {
    if (!fs.existsSync(dirPath)) {
        console.log(`Created ${dirPath} folder.`);
        fs.mkdirSync(dirPath);
    }
}