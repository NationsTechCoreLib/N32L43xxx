//#define MSC_ImageSize   0x00001000
#define MSC_ImageSize   0x400

extern const unsigned char DiskImage[MSC_ImageSize];   /* Disk Image */

//����U�̴�0x8003000��ʼ,ʹ��FAT������,��ʽ������Ϊ
//(1)MBR����������������
//0x8003000: eb 3c 90 4d 53 44 4f 53 35 2e 30 00 04 01 02 00
//           0        3                       11    13 14		
//00.��תָ��
//03.MSDOS5.3
//11.ÿ�����ֽ���		=0x400=1K�ֽ�
//13.ÿ��ռ��������		=1��
//14.��������			=2��,FAT1��ʼ��ַ=0x400*2=0x800
//0x8003010: 02 00 02 34 00 f8 01 00 01 00 01 00 00 00 00 00
//           16 17    19    21 22    24    26    28
//16.FAT������			=2��,
//17.����Ŀ¼�ļ���	=0x200=512��
//19.�߼���������		=0x34=52��,[����=52K]
//21.ý��������			=0xf8,��ʾӲ��
//22.ÿ��FATռ��������	=1
//24.ÿ���ŵ�������		=1
//26.��ͷ��				=1
//28.����������			=0
//��Ŀ¼����λ��=FAT������*FAT����ռ�õ���������+������������=2*1=2
//�û����ݿ�ʼλ��=��Ŀ¼����λ��+��Ŀ¼��ռ������=2+?
//0x8003020: 00 00 00 00 00 00 29 c8 bf 76 b4 4e 4f 20 4e 41
//           32          36 37 38 39          43
//32.���BPB_TotSec16��0,���������¼��������
//36.�ж�13����������	=0
//37.δʹ��
//38.��չ������־		=0x29
//39.�����к�			=0xbf-76-b4-c8  
//43.����				=NO NAME	������11���ַ�,�����Կո����	
//0x8003030: 4d 45 20 20 20 20 46 41 54 31 32 20 20 20 33 c9
//                             54
//54.�ļ�ϵͳ����		=FAT12		������8���ַ�,�������ո�  
//62.��������						��ƫ��0�ֽڴ��Ķ���ת����	
//510.ϵͳ������ʶ		=0xaa55h 

// ��2��DBR��
// ��3��FAT��
// ��4��DIR������Ŀ¼���� 
// ��5�����ݣ�DATA���� 
//BookKeep = PhysSectPerTrck + 1 + NumFATs * NumSectPerFAT + SectRootDir

