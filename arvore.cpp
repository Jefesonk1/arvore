void printa(No_arv_parse *no)
{

  cout << "<li> <span>";
  cout << "<span style=\"color:#3581B8\">" << no->simb << "</span> <br>";
  cout << "<span style=\"color:#31493C\">" << no->regra << "</span> <br>";
  cout << "<span style=\"color: #da3e52\";font-weight: bold>" << no->dado_extra << "</span> <br>";
  cout << "</span>" << endl;
  if (no->filhos.size() > 0)
  {
    cout << "<ul>" << endl;
    for (int i = 0; i < no->filhos.size(); i++)
    {
      printa(no->filhos[i]);
    }
    cout << "</ul>" << endl;
  }
  cout << "</li>" << endl;
}


void printarArvoreHTML(Arvore_parse arv){
  const char* top = "<!DOCTYPE html>"
  "<html lang=\"en\">"
  "<head>"
  "<style>"
  	"body{\n"
  "   background-color: #F3F8F2\n"
  "}\n"
  ".tree,\n"
  ".tree ul,\n"
  ".tree li {\n"
  "    list-style: none;\n"
  "    margin: 0;\n"
  "    padding: 0;\n"
  "    position: relative;\n"
  "}\n"
  ".tree {\n"
  "    margin: 0 0 1em;\n"
  "    text-align: center;\n"
  "}\n"
  ".tree,\n"
  ".tree ul {\n"
  "    display: table;\n"
  "}\n"
  ".tree ul {\n"
  "    width: 100%;\n"
  "}\n"
  ".tree li {\n"
  "    display: table-cell;\n"
  "    padding: .5em 0;\n"
  "    vertical-align: top;\n"
  "}\n"
  ".tree li:before {\n"
  "    outline: solid 1px #666;\n"
  "    content: \"\";\n"
  "    left: 0;\n"
  "    position: absolute;\n"
  "    right: 0;\n"
  "    top: 0;\n"
  "}\n"
  ".tree li:first-child:before {\n"
  "    left: 50%;\n"
  "}\n"
  ".tree li:last-child:before {\n"
  "    right: 50%;\n"
  "}\n"
  ".tree code,\n"
  ".tree span {\n"
  "    border: solid .1em #666;\n"
  "    border-radius: .2em;\n"
  "    display: inline-block;\n"
  "    margin: 0 .2em .5em;\n"
  "    padding: .2em .5em;\n"
  "    position: relative;\n"
  "}\n"
  ".tree ul:before,\n"
  ".tree code:before,\n"
  ".tree span:before {\n"
  "    outline: solid 1px #666;\n"
  "    content: \"\";\n"
  "    height: .5em;\n"
  "    left: 50%;\n"
  "    position: absolute;\n"
  "}\n"
  ".tree ul:before {\n"
  "    top: -.5em;\n"
  "}\n"
  ".tree code:before,\n"
  ".tree span:before {\n"
  "    top: -.55em;\n"
  "}\n"
  ".tree>li {\n"
  "    margin-top: 0;\n"
  "}\n"
  ".tree>li:before,\n"
  ".tree>li:after,\n"
  ".tree>li>code:before,\n"
  ".tree>li>span:before {\n"
  "    outline: none;\n"
  "}"
  "</style>"
  "<meta charset=\"UTF-8\">"
  "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">"
  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
  "<link rel=\"stylesheet\" href=\"style.css\">"
  "<title>Document</title>"
  "</head>";
  cout << top;
  cout << "<ul class=\"tree\">" << endl;
  printa(arv.raiz);
  cout << "</ul>" << endl;
  const char* bottom = "</body> </html>";
  cout<<bottom;

}
