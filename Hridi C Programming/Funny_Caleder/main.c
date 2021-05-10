#include<stdio.h>
#include<ctype.h>

char month[][300] = {
    "Joriye dhorechi",
    "Lathi merechi",
    "Thappor merechi",
    "Dourani diyechi",
    "Valobesechi",
    "Chumu diyechi",
    "Niye paliyechi",
    "Mere felechi",
    "Kheye felechi",
    "Dhakka diyechi",
    "Ranna korechi",
    "Guli kore diyechi"
};
char day[][300] = {
    " paser basar vabi ke",
    " premik/premika ke",
    " amar biral ke",
    " bacher paser jatri ke",
    " alien ke",
    " basar daroan ke",
    " amar kukur ke",
    " rickshaw wala mama ke",
    " bondhu ke",
    " vhut ke",
    " crush ke",
    " takar bostake",
    " office er boss ke",
    " amar vaike",
    " zombie ke",
    " just friend ke",
    " ekta murgi ke",
    " cha wala mama ke",
    " coffee r cup ke",
    " colleague ke",
    " bus er helper ke",
    " ekta sagol ke",
    " television ke",
    " bondhur premik/premikake",
    " versityr junior ke",
    " amra phone ke",
    " versityr senior ke",
    " rastar ochena manus ke",
    " kacchi r plate ke",
    " amar teacher ke",
    " paser chader sundori ke"
};
char firstLetter[][300] = {
    " moner shantir jonno",
    " modhu khawar por",
    " abong khub tas peyechi",
    " kaj nei tai",
    " janala diye ber hoye pankha diye namar jonno",
    " khushite, thelay, ghorte",
    " karon etai amar kaj",
    " somoy nosto korar jonno",
    " karon ami der mash er jonno pagol chilam",
    " dekha hingsha hoto tai",
    " vallage tai",
    " karon eta amr shokh",
    " vat khawer jonno",
    " karon etai science",
    " karon etai ami",
    " tv dekhar jonno",
    " char rastar mor e",
    " karon amar khub current",
    " karon jibon e adventure nai",
    " gaan sunte sunte",
    " karon mone boro jala",
    " mone onek shukh tai",
    " kono karon chara emnei",
    " ghum theke uthe",
    " dudh cha pawar jonno",
    " amar kichu daring korar chilo"
};

int main()
{

    int dd, mm, repeat, ni;
    char n;

    printf("============= FIND OUT WHY DID YOU DO THESE WEIRD THINGS =============");

    while(1)
    {
        printf("\n\n==============================\n\n");

        printf("Please input birth month(any number between 1 to 12): ");
        scanf("%d", &mm);

        printf("Please input birth day(any number between 1 to 31): ");
        scanf("%d", &dd);

        getchar();
        printf("Please enter first letter of your name: ");
        scanf("%c", &n);

        ni = toupper(n) - 'A' + 1;

        if(ni >0 && ni < 27 && mm > 0 && mm < 13 && dd > 0 && dd < 32)
            printf("\n\nRESULT: \t%s%s%s.", month[mm-1], day[dd-1], firstLetter[ni-1]);
        else printf("\n\nSorry!!! Invalid birthday or first letter of name is not alphabet :( :( :(");

        printf("\n\n==============================\n\n");

        printf("Do you want to repeat? (Type 0 for NO or 1 for YES): ");
        scanf("%d", &repeat);
        if(repeat == 0)
            break;
        else continue;

    }

    return 0;
}
