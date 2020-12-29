int max(vector<string> &arr); //return chuỗi có độ dài lớn nhất
string sum_v2(string a, string b); //tinh tong 2 chuoi
string summary(std::vector<string> arr);  //tinh tong cac chuoi/


int max(vector<string> &arr)   
{
    int max = arr[0].length();
    for (int i = 1; i < arr.size(); i++)
    {
        while (arr[i][0] == '0')   //xóa số 0 ở đầu chuỗi
        {
            arr[i].erase(arr[i].begin());
        }
        int leng = arr[i].length();
        if (max < leng) max = leng;
    }
    return max;
}
string sum_v2(string a, string b)
{
    bool check = false;
    int lenga = a.length()-1;
    int lengb = b.length()-1;
    while (lengb >= 0)
    {
        int sum = check == true ? 1 : 0;
        sum += (a[lenga] - 48) + (b[lengb] - 48);
        if (sum >= 10)
        {
            check = true;
            a[lenga--] = (sum % 10) + 48;       
        }
        else
        {
            check = false;
            a[lenga--] = sum + 48;
        }
        lengb--;
    }
    while (check)
    {
        if (lenga < 0)
        {
            check = false;
            a.insert(0, "1");
            break;
        }
        int sum = 1 + (a[lenga] - 48);
        if (sum >= 10)
        {
            check = true;
            a[lenga--] = (sum % 10) + 48;
        }
        else
        {
            check = false;
            a[lenga--] = sum + 48;
        }
    }
    
    return a;
}
string summary(std::vector<string> arr)
{
    string s(max(arr), '0');  //khởi tạo biến s toàn kí tự 0 bằng với độ dài chuối lớn nhất  
   for (int i = 0; i < arr.size(); i++)
    {
        s = sum_v2(s, arr[i]);
    }
    return  s;
}
