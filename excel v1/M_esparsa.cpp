#include "M_esparsa.h"

/*bool menor(const string& a,const string &b)
{
     string :: const_iterator ita=a.begin();
     string :: const_iterator itb=b.begin();
    for(;;)
    {
        if(int(*ita)>int(*itb))
         return false;
        if(ita==a.end())
            return true;
        if(itb==b.end())
            return false;
         ++ita;
         ++itb;
    }

}*/
M_esparsa::M_esparsa()
{
    for(int i=0;i<26;i++)
    {
        m_Vertical.push_back(0);
        m_Horizontal.push_back(0);
    }
}
void M_esparsa:: insertarH( celda * cell)//cell es la celda a insertar
{
     celda *&p= m_Horizontal[cell->get_x()];
     if(!p)
     {
         p=cell;
         return;
     }
     if(p->get_y()>cell->get_y())
     {
         cell->set_celdaD(p);
         p=cell;
         return;
     }
     celda * temp=p;
     while(true)
     {
         if(!temp->get_D())
         {
             temp->set_celdaD(cell);
             break;
         }
         if(temp->get_D()->get_y()>cell->get_y())
         {
             cell->set_celdaD(temp->get_D());
             temp->set_celdaD(cell);
             break;
         }
         temp=temp->get_D();
     }
}
void M_esparsa:: insertarV( celda * cell)//cell es la celda a insertar
{
     celda *&p= m_Vertical[cell->get_y()];
     if(!p)
     {
         p=cell;
         return;
     }
     if(p->get_x()>cell->get_x())
     {
         cell->set_celdaR(p);
         p=cell;
         return;
     }
     celda * temp=p;
     while(true)
     {
         if(!temp->get_R())
         {
             temp->set_celdaR(cell);
             break;
         }
         if(temp->get_R()->get_x()>cell->get_x())
         {
             cell->set_celdaR(temp->get_R());
             temp->set_celdaR(cell);
             break;
         }
         temp=temp->get_R();
     }
}
void M_esparsa :: insertar(celda * cell)
{
    this->insertarH(cell);
    this->insertarV(cell);
}
M_esparsa::~M_esparsa()
{

}
