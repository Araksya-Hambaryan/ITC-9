var loop;        
var randy;        
 
function make_array(size)        
{
    this.length = size;
        for (a=0; a<size; a++) this[a]="";
}
 
function generatenos()                
{
        hold = new make_array(document.lottery.max_number.value);
 
        document.lottery.numbers.value = "";    
 
for(loop=0;loop<document.lottery.balls_drawn.value;loop++)    
        {
                randy = Math.round(Math.random()*(document.lottery.max_number.value-1));
                randy++;        
 
                if(hold[randy]==1)
                {
                        loop--;                
                        continue;              
                }
 
                if(hold[randy]!=1)
                {
                        hold[randy]=1;       
                }
        }
 for(loop=0;loop<=document.lottery.max_number.value;loop++)
        {
                if(hold[loop]==1)        
                document.lottery.numbers.value = document.lottery.numbers.value + loop + ", ";       
        }
 
        
}

