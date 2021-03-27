#include <cstdlib>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form("Shrubbery Creation Form", 145, 137)
{
    setTarget(other.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    setTarget(other.getTarget());
	return(*this);
}

void	ShrubberyCreationForm::action() const
{
    std::ofstream	file;
    std::string randomTree[10] = {"│   ├─ node_modules/","│   ├─ public/",  "│   ├─ favicon.ico", "│   ├─ index.html", "│   ├─ robots.txt",
                                  "│   ├─ index.css","│   ├─ src/", "│  ├─ index.js", "│   ├─ .gitignore", "├─ package.json"};
    std::string tree = "         - - -\n" \
"       -        -  -     --    -\n" \
"    -                 -         -  -\n" \
"                    -\n" \
"                   -                --\n" \
"   -          -            -              -\n" \
"   -            '-,        -               -\n" \
"   -              'b      *\n" \
"    -              '$    #-                --\n" \
"   -    -           $:   #:               -\n" \
" --      -  --      *#  @):        -   - -\n" \
"              -     :@,@):   ,-**:'   -\n" \
"  -      -,         :@@*: --**'      -   -\n" \
"           '#o-    -:(@'-@*'  -\n" \
"   -  -       'bq,--:,@@*'   ,*      -  -\n" \
"              ,p$q8,:@)'  -p*'      -\n" \
"       -     '  - '@@Pp@@*'    -  -\n" \
"        -  - --    Y7'.'     -  -\n" \
"                  :@):.\n" \
"                 .:@:'.\n" \
"               .::(@:.\n";

    srand(time(0));
    file.open((getTarget() + "_shruberry").c_str(), std::ofstream::trunc);
    file << ".git                  " << std::endl;
    file << "my-app/" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        file << randomTree[rand() % 10] << std::endl;
    }
    file << std::endl;
    file << tree << std:: endl;
    file.close();
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("Shrubbery Creation Form", 145, 137)
{
    setTarget(target);
}

