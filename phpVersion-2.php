<?

$k = 297;
$n = 3;
$year = 2024;
$yearV = 28;
if ($year % 4 == 0) {
    if ($year % 100 != 0 || $year % 400 == 0) {
        $yearV = 29;
    } 
    else {
        $yearV = 28;
    }
} 
else {
    $yearV = 28;
}
$arrDays = [31, $yearV, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
$arrMonths = ["Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", 
            "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"];

$month = 0;

while ($k > $arrDays[$month]) {
    $k -= $arrDays[$month];
    $month++;
}

$monthname = $arrMonths[$month];

$arrWeek = [1 => "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"];

$week = $arrWeek[$n];

echo "$k $monthname, $week $year года";
$year = 2025; 
?>
