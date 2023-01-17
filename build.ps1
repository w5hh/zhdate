$build_path = "build";
if(!(Test-Path -Path "$build_path")){
    New-Item -ItemType Directory -Force -Path "$build_path"
}
cl src/main.cpp /Fo"$build_path/" /Fe"$build_path/" /std:c++20 /EHsc