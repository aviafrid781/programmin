function staircase($n)
{

    for($i=1; $i<=$n; $i++)
    {

        for($j=1; $j <= $n; $j++)
        {
            if( ($n - $i) < $j )
            {
                echo "#";
            }
            else
            {
                echo " ";

            }
        }
        echo "\n";
    }
}
