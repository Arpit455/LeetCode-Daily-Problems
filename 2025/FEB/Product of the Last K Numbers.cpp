class ProductOfNumbers {
public:
vector<int>product;
    ProductOfNumbers() {
        product={1};
        
    }
    
    void add(int num) {

     if(num==0)
     product={1};
     else
     product.push_back(product.back()*num);
   
    }
    
    int getProduct(int k) {
        int n=product.size();
        if(k>=n)
        return 0;
        else
        return product[n-1]/product[n-1-k];
        

    }
};