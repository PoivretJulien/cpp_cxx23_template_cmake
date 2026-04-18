# Use the directory where this script is located
$root = $PSScriptRoot

Get-ChildItem -Path $root -Directory -Recurse -Filter "build" |
ForEach-Object {
    Write-Host -ForegroundColor Cyan "Deleting:" $_.FullName
    Remove-Item -Path $_.FullName -Recurse -Force
}

Write-Host "Cleanup complete." -ForegroundColor Yellow