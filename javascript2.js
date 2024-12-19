function updateDateTime()
           { let now = new Date();
             let date = now.toLocaleDateString(); 
             let time = now.getHours() + ":" + now.getMinutes() + ":" + now.getSeconds(); 
             document.getElementById('date').innerHTML = date; 
             document.getElementById('time').innerHTML = time; } 
           
           updateDateTime();
           setInterval(updateDateTime, 1000); 