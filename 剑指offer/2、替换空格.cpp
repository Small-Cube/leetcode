class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str==NULL||length<=0) return ;
        int ori_len=0;
        int blank=0;
        int i=0;
        while(str[i]!='\0'){
            ++ori_len;
            if(str[i]==' ')
                ++blank;
            ++i;
        }
        int new_len=ori_len+(2*blank);
        int index_ori=ori_len;
        int index_new=new_len;
        while(index_ori>=0&&index_new>index_ori){
            if(str[index_ori]==' '){
                str[index_new--]='0';
                str[index_new--]='2';
                str[index_new--]='%';
            }
            else {
                str[index_new--]=str[index_ori];
            }
             --index_ori;
        }
       
	}
};
 
//指针统计
 
class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str==NULL||length<=0) return ;
        int ori_len=0;
        int blank=0;
       const char* p=str;
        while((*p)!='\0'){
            ++ori_len;
            if(*p==' ')
                ++blank;
           ++p;
        }
        int new_len=ori_len+(2*blank);
        int index_ori=ori_len;
        int index_new=new_len;
        while(index_ori>=0&&index_new>index_ori){
            if(str[index_ori]==' '){
                str[index_new--]='0';
                str[index_new--]='2';
                str[index_new--]='%';
            }
            else {
                str[index_new--]=str[index_ori];
            }
             --index_ori;
        }
       
	}
};