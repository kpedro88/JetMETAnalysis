//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 16 15:35:42 2014 by ROOT version 5.32/00
// from TTree t/t
// found on file: /home/aperloff/fdata/JRA_outfiles_53X_20140109_pbs/JRA/JRA.root
//////////////////////////////////////////////////////////

#ifndef JRANtuple_h
#define JRANtuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

using std::vector;

class JRANtuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   vector<int>*    npus;
   vector<float>*  tnpus;
   vector<float>*  zpositions;
   vector<int>*    bxns;
   vector<float>*  sumpt_lowpt;
   vector<float>*  sumpt_highpt;
   vector<int>*    ntrks_lowpt;
   vector<int>*    ntrks_highpt;
   vector<float>*  rhos;
   Float_t         rho;
   Float_t         rho_hlt;
   Float_t         pthat;
   Float_t         beta;
   Float_t         betaStar;
   Float_t         weight;
   Long64_t        npv;
   Long64_t        run;
   Long64_t        lumi;
   Long64_t        evt;
   UChar_t         nref;
   UChar_t         refrank[92];   //[nref]
   Int_t           refpdgid[92];   //[nref]
   Int_t           refpdgid_algorithmicDef[92];   //[nref]
   Int_t           refpdgid_physicsDef[92];   //[nref]
   Float_t         refe[92];   //[nref]
   Float_t         refpt[92];   //[nref]
   Float_t         refeta[92];   //[nref]
   Float_t         refphi[92];   //[nref]
   Float_t         refy[92];   //[nref]
   Float_t         refdrjt[92];   //[nref]
   Float_t         refarea[92];   //[nref]
   Float_t         jte[92];   //[nref]
   Float_t         jtpt[92];   //[nref]
   Float_t         jteta[92];   //[nref]
   Float_t         jtphi[92];   //[nref]
   Float_t         jty[92];   //[nref]
   Float_t         jtjec[92];   //[nref]
   Float_t         jtarea[92];   //[nref]
   Float_t         jtchf[92];   //[nref]
   Float_t         jtnhf[92];   //[nref]
   Float_t         jtnef[92];   //[nref]
   Float_t         jtcef[92];   //[nref]
   Float_t         jtmuf[92];   //[nref]
   Float_t         jthfhf[92];   //[nref]
   Float_t         jthfef[92];   //[nref]
   Float_t         refdzvtx[92];   //[nref]

   // List of branches
   TBranch        *b_npus;   //!
   TBranch        *b_tnpus;   //!
   TBranch        *b_zpositions;   //!
   TBranch        *b_bxns;   //!
   TBranch        *b_sumpt_lowpt;   //!
   TBranch        *b_sumpt_highpt;   //!
   TBranch        *b_ntrks_lowpt;   //!
   TBranch        *b_ntrks_highpt;   //!
   TBranch        *b_rhos;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_rho_hlt;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_beta;   //!
   TBranch        *b_betaStar;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_nref;   //!
   TBranch        *b_refrank;   //!
   TBranch        *b_refpdgid;   //!
   TBranch        *b_refpdgid_algorithmicDef;   //!
   TBranch        *b_refpdgid_physicsDef;   //!
   TBranch        *b_refe;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refdrjt;   //!
   TBranch        *b_refarea;   //!
   TBranch        *b_jte;   //!
   TBranch        *b_jtpt;   //!
   TBranch        *b_jteta;   //!
   TBranch        *b_jtphi;   //!
   TBranch        *b_jty;   //!
   TBranch        *b_jtjec;   //!
   TBranch        *b_jtarea;   //!
   TBranch        *b_jtchf;   //!
   TBranch        *b_jtnhf;   //!
   TBranch        *b_jtnef;   //!
   TBranch        *b_jtcef;   //!
   TBranch        *b_jtmuf;   //!
   TBranch        *b_jthfhf;   //!
   TBranch        *b_jthfef;   //!
   TBranch        *b_refdzvtx;   //!

   JRANtuple(TTree *tree=0, bool newTree = false);
   virtual ~JRANtuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     MakeTree(TTree *tree);

   int itIndex();
   double sumEOOT();
   double sumLOOT();
};

#endif

#ifdef JRANtuple_cxx
JRANtuple::JRANtuple(TTree *tree, bool newTree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if(newTree) {
      MakeTree(tree);
   }
   else {
      if (tree == 0) {
         TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/home/aperloff/fdata/JRA_outfiles_53X_20140109_pbs/JRA/JRA.root");
         if (!f || !f->IsOpen()) {
            f = new TFile("/home/aperloff/fdata/JRA_outfiles_53X_20140109_pbs/JRA/JRA.root");
         }
         TDirectory * dir = (TDirectory*)f->Get("/home/aperloff/fdata/JRA_outfiles_53X_20140109_pbs/JRA/JRA.root:/ak5pf");
         dir->GetObject("t",tree);

      }
      Init(tree);
   }
}

JRANtuple::~JRANtuple()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t JRANtuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t JRANtuple::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void JRANtuple::MakeTree(TTree *tree)
{
   gROOT->ProcessLine("#include <vector>");

   // Set object pointer
   npus         = new vector<int>;
   tnpus        = new vector<float>;
   zpositions   = new vector<float>;
   bxns         = new vector<int>;
   sumpt_lowpt  = new vector<float>;
   sumpt_highpt = new vector<float>;
   ntrks_lowpt  = new vector<int>;
   ntrks_highpt = new vector<int>;
   rhos         = new vector<float>;

   //npus = 0;
   //tnpus = 0;
   //bxns = 0;
   //sumpt_lowpt = 0;
   //sumpt_highpt = 0;
   //ntrks_lowpt = 0;
   //ntrks_highpt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->Branch("npus", "vector<Int_t>", &npus);
   fChain->Branch("tnpus", "vector<Float_t>", &tnpus);
   fChain->Branch("zpositions", "vector<Float_t>", &zpositions);
   fChain->Branch("bxns", "vector<Int_t>", &bxns);
   fChain->Branch("sumpt_lowpt", "vector<Float_t>", &sumpt_lowpt);
   fChain->Branch("sumpt_highpt", "vector<Float_t>", &sumpt_highpt);
   fChain->Branch("ntrks_lowpt", "vector<Int_t>", &ntrks_lowpt);
   fChain->Branch("ntrks_highpt", "vector<Int_t>", &ntrks_highpt);
   fChain->Branch("rhos", "vector<Float_t>", &rhos);
   fChain->Branch("rho", &rho, "rho/F");
   fChain->Branch("rho_hlt", &rho_hlt, "rho_hlt/F");
   fChain->Branch("pthat", &pthat, "pthat/F");
   fChain->Branch("beta", &beta, "beta/F");
   fChain->Branch("betaStar", &betaStar, "betaStar/F");
   fChain->Branch("weight", &weight, "weight/F");
   fChain->Branch("npv", &npv, "npv/L");
   fChain->Branch("run", &run, "run/L");
   fChain->Branch("lumi", &lumi, "lumi/L");
   fChain->Branch("evt", &evt, "evt/L");
   fChain->Branch("nref", &nref, "nref/b");
   fChain->Branch("refrank", refrank, "refrank[nref]/b");
   fChain->Branch("refpdgid", refpdgid, "refpdgid[nref]/I");
   fChain->Branch("refpdgid_algorithmicDef", refpdgid_algorithmicDef, "refpdgid_algorithmicDef[nref]/I");
   fChain->Branch("refpdgid_physicsDef", refpdgid_physicsDef, "refpdgid_physicsDef[nref]/I");
   fChain->Branch("refe", refe, "refe[nref]/F");
   fChain->Branch("refpt", refpt, "refpt[nref]/F");
   fChain->Branch("refeta", refeta, "refeta[nref]/F");
   fChain->Branch("refphi", refphi, "refphi[nref]/F");
   fChain->Branch("refy", refy, "refy[nref]/F");
   fChain->Branch("refdrjt", refdrjt, "refdrjt[nref]/F");
   fChain->Branch("refarea", refarea, "refarea[nref]/F");
   fChain->Branch("jte", jte, "jte[nref]/F");
   fChain->Branch("jtpt", jtpt, "jtpt[nref]/F");
   fChain->Branch("jteta", jteta, "jteta[nref]/F");
   fChain->Branch("jtphi", jtphi, "jtphi[nref]/F");
   fChain->Branch("jty", jty, "jty[nref]/F");
   fChain->Branch("jtjec", jtjec, "jtjec[nref]/F");
   fChain->Branch("jtarea", jtarea, "jtarea[nref]/F");
   fChain->Branch("jtchf", jtchf, "jtchf[nref]/F");
   fChain->Branch("jtnhf", jtnhf, "jtnhf[nref]/F");
   fChain->Branch("jtnef", jtnef, "jtnef[nref]/F");
   fChain->Branch("jtcef", jtcef, "jtcef[nref]/F");
   fChain->Branch("jtmuf", jtmuf, "jtmuf[nref]/F");
   fChain->Branch("jthfhf", jthfhf, "jthfhf[nref]/F");
   fChain->Branch("jthfef", jthfef, "jthfef[nref]/F");
   fChain->Branch("refdzvtx", refdzvtx, "refdzvtx[nref]/F");
   Notify();
}

void JRANtuple::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   npus         = new vector<int>;
   tnpus        = new vector<float>;
   zpositions   = new vector<float>;
   bxns         = new vector<int>;
   sumpt_lowpt  = new vector<float>;
   sumpt_highpt = new vector<float>;
   ntrks_lowpt  = new vector<int>;
   ntrks_highpt = new vector<int>;
   rhos         = new vector<float>;

   //npus = 0;
   //tnpus = 0;
   //bxns = 0;
   //sumpt_lowpt = 0;
   //sumpt_highpt = 0;
   //ntrks_lowpt = 0;
   //ntrks_highpt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("npus", &npus, &b_npus);
   fChain->SetBranchAddress("tnpus", &tnpus, &b_tnpus);
   fChain->SetBranchAddress("zpositions", &zpositions, &b_zpositions);
   fChain->SetBranchAddress("bxns", &bxns, &b_bxns);
   fChain->SetBranchAddress("sumpt_lowpt", &sumpt_lowpt, &b_sumpt_lowpt);
   fChain->SetBranchAddress("sumpt_highpt", &sumpt_highpt, &b_sumpt_highpt);
   fChain->SetBranchAddress("ntrks_lowpt", &ntrks_lowpt, &b_ntrks_lowpt);
   fChain->SetBranchAddress("ntrks_highpt", &ntrks_highpt, &b_ntrks_highpt);
   fChain->SetBranchAddress("rhos", &rhos, &b_rhos);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("rho_hlt", &rho_hlt, &b_rho_hlt);
   fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
   fChain->SetBranchAddress("beta", &beta, &b_beta);
   fChain->SetBranchAddress("betaStar", &betaStar, &b_betaStar);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("nref", &nref, &b_nref);
   fChain->SetBranchAddress("refrank", refrank, &b_refrank);
   fChain->SetBranchAddress("refpdgid", refpdgid, &b_refpdgid);
   fChain->SetBranchAddress("refpdgid_algorithmicDef", refpdgid_algorithmicDef, &b_refpdgid_algorithmicDef);
   fChain->SetBranchAddress("refpdgid_physicsDef", refpdgid_physicsDef, &b_refpdgid_physicsDef);
   fChain->SetBranchAddress("refe", refe, &b_refe);
   fChain->SetBranchAddress("refpt", refpt, &b_refpt);
   fChain->SetBranchAddress("refeta", refeta, &b_refeta);
   fChain->SetBranchAddress("refphi", refphi, &b_refphi);
   fChain->SetBranchAddress("refy", refy, &b_refy);
   fChain->SetBranchAddress("refdrjt", refdrjt, &b_refdrjt);
   fChain->SetBranchAddress("refarea", refarea, &b_refarea);
   fChain->SetBranchAddress("jte", jte, &b_jte);
   fChain->SetBranchAddress("jtpt", jtpt, &b_jtpt);
   fChain->SetBranchAddress("jteta", jteta, &b_jteta);
   fChain->SetBranchAddress("jtphi", jtphi, &b_jtphi);
   fChain->SetBranchAddress("jty", jty, &b_jty);
   fChain->SetBranchAddress("jtjec", jtjec, &b_jtjec);
   fChain->SetBranchAddress("jtarea", jtarea, &b_jtarea);
   fChain->SetBranchAddress("jtchf", jtchf, &b_jtchf);
   fChain->SetBranchAddress("jtnhf", jtnhf, &b_jtnhf);
   fChain->SetBranchAddress("jtnef", jtnef, &b_jtnef);
   fChain->SetBranchAddress("jtcef", jtcef, &b_jtcef);
   fChain->SetBranchAddress("jtmuf", jtmuf, &b_jtmuf);
   fChain->SetBranchAddress("jthfhf", jthfhf, &b_jthfhf);
   fChain->SetBranchAddress("jthfef", jthfef, &b_jthfef);
   fChain->SetBranchAddress("refdzvtx", refdzvtx, &b_refdzvtx);
   Notify();
}

Bool_t JRANtuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void JRANtuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t JRANtuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef JRANtuple_cxx
