const { app, BrowserWindow } = require('electron') ;
function creatwindow (){
        const win = new BrowserWindow({
            width: 1280,
            height: 600
        });
    win.loadFile('src/index.html');
}

app.whenReady().then(creatwindow);
app.on("window-all-closed", () => {
    if(process.platform !== 'darwin') app.quit()
});