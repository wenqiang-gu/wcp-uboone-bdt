#ifndef UBOONE_LEE_PFEVAL
#define UBOONE_LEE_PFEVAL

namespace LEEana{
struct PFevalInfo{
  bool flag_NCDelta;
  bool flag_showerMomentum;
  bool flag_recoprotonMomentum;
  
  Int_t run;
  Int_t subrun;
  Int_t event;
  Int_t neutrino_type;
  Float_t reco_nuvtxX;
  Float_t reco_nuvtxY;
  Float_t reco_nuvtxZ;
  Float_t reco_showervtxX;
  Float_t reco_showervtxY;
  Float_t reco_showervtxZ;
  Float_t reco_showerKE;
  Float_t reco_muonvtxX;
  Float_t reco_muonvtxY;
  Float_t reco_muonvtxZ;
  Float_t reco_muonMomentum[4];

  Float_t reco_showerMomentum[4];
  // new variables added, the will go with reco_showerMomentum ...
  Int_t reco_Nproton;
  Int_t mcflux_run;
  Int_t mcflux_evtno;
  Int_t mcflux_ndecay;
  Int_t mcflux_ntype;
  Float_t mcflux_nuEnergy;
  Float_t mcflux_vx;
  Float_t mcflux_vy;
  Float_t mcflux_vz;
  Float_t mcflux_genx;
  Float_t mcflux_geny;
  Float_t mcflux_genz;
  Float_t mcflux_dk2gen;
  Float_t mcflux_gen2vtx;
  Int_t truth_nuScatType;
  Float_t truth_nu_pos[4];
  Float_t truth_showerMomentum[4];
  Float_t truth_nu_momentum[4];
  
  Float_t nuvtx_diff;
  Float_t showervtx_diff;
  Float_t muonvtx_diff;
  
  Float_t truth_corr_nuvtxX;
  Float_t truth_corr_nuvtxY;
  Float_t truth_corr_nuvtxZ;
  Float_t truth_corr_showervtxX;
  Float_t truth_corr_showervtxY;
  Float_t truth_corr_showervtxZ;
  Float_t truth_showerKE;
  Float_t truth_corr_muonvtxX;
  Float_t truth_corr_muonvtxY;
  Float_t truth_corr_muonvtxZ;
  Float_t truth_muonvtxX;
  Float_t truth_muonvtxY;
  Float_t truth_muonvtxZ;
  Float_t truth_muonendX;
  Float_t truth_muonendY;
  Float_t truth_muonendZ;
  Float_t truth_muonMomentum[4];
  Float_t truth_nuEnergy;
  Float_t truth_energyInside;
  Float_t truth_electronInside;
  Int_t truth_nuPdg;
  Bool_t truth_isCC;
  Float_t truth_vtxX;
  Float_t truth_vtxY;
  Float_t truth_vtxZ;
  Float_t truth_nuTime;
  Int_t truth_nuIntType;

  //
  Int_t truth_NprimPio;
  Float_t truth_pio_energy_1;
  Float_t truth_pio_energy_2;
  Float_t truth_pio_angle;
  Int_t truth_NCDelta;
  Float_t reco_protonMomentum[4];


  
  
  
};


void set_tree_address(TTree *tree0, PFevalInfo& tagger_info, int flag = 1);
void put_tree_address(TTree *tree0, PFevalInfo& tagger_info, int flag = 1);
 void clear_pfeval_info(PFevalInfo& tagger_info);
}

void LEEana::clear_pfeval_info(PFevalInfo& tagger_info){
  tagger_info.flag_NCDelta = false;
  tagger_info.flag_showerMomentum = false;
  tagger_info.flag_recoprotonMomentum = false;

  tagger_info.neutrino_type=0;
  tagger_info.reco_nuvtxX=0;
  tagger_info.reco_nuvtxY=0;
  tagger_info.reco_nuvtxZ=0;
  tagger_info.reco_showervtxX=0;
  tagger_info.reco_showervtxY=0;
  tagger_info.reco_showervtxZ=0;
  tagger_info.reco_showerKE=0;
  tagger_info.reco_muonvtxX=0;
  tagger_info.reco_muonvtxY=0;
  tagger_info.reco_muonvtxZ=0;
  
  
  
  tagger_info.nuvtx_diff=0;
  tagger_info.showervtx_diff=0;
  tagger_info.muonvtx_diff=0;
  
  tagger_info.truth_corr_nuvtxX=0;
  tagger_info.truth_corr_nuvtxY=0;
  tagger_info.truth_corr_nuvtxZ=0;
  tagger_info.truth_corr_showervtxX=0;
  tagger_info.truth_corr_showervtxY=0;
  tagger_info.truth_corr_showervtxZ=0;
  tagger_info.truth_showerKE=0;
  tagger_info.truth_corr_muonvtxX=0;
  tagger_info.truth_corr_muonvtxY=0;
  tagger_info.truth_corr_muonvtxZ=0;
  tagger_info.truth_muonvtxX=0;
  tagger_info.truth_muonvtxY=0;
  tagger_info.truth_muonvtxZ=0;
  tagger_info.truth_muonendX=0;
  tagger_info.truth_muonendY=0;
  tagger_info.truth_muonendZ=0;
  
  tagger_info.truth_nuEnergy=0;
  tagger_info.truth_energyInside=0;
  tagger_info.truth_electronInside=0;
  tagger_info.truth_nuPdg=0;
  tagger_info.truth_isCC=0;
  tagger_info.truth_vtxX=0;
  tagger_info.truth_vtxY=0;
  tagger_info.truth_vtxZ=0;
  tagger_info.truth_nuTime=0;
  tagger_info.truth_nuIntType=0;

  //
  tagger_info.truth_NprimPio=0;
  tagger_info.truth_pio_energy_1=0;
  tagger_info.truth_pio_energy_2=0;
  tagger_info.truth_pio_angle=0;
  tagger_info.truth_NCDelta=0;

  
  tagger_info.reco_Nproton=0;
  tagger_info.mcflux_run=0;
  tagger_info.mcflux_evtno=0;
  tagger_info.mcflux_ndecay=0;
  tagger_info.mcflux_ntype=0;
  tagger_info.mcflux_nuEnergy=0;
  tagger_info.mcflux_vx=0;
  tagger_info.mcflux_vy=0;
  tagger_info.mcflux_vz=0;
  tagger_info.mcflux_genx=0;
  tagger_info.mcflux_geny=0;
  tagger_info.mcflux_genz=0;
  tagger_info.mcflux_dk2gen=0;
  tagger_info.mcflux_gen2vtx=0;
  tagger_info.truth_nuScatType=0;
  
  
  for (Int_t i=0;i!=4;i++){
    tagger_info.reco_muonMomentum[i]=0;
    tagger_info.reco_showerMomentum[i]=0;
    tagger_info.truth_muonMomentum[i]=0;
    tagger_info.reco_protonMomentum[i]=0;

    tagger_info.truth_showerMomentum[i] = 0;
    tagger_info.truth_nu_pos[i] =0;
    tagger_info.truth_nu_momentum[i]=0;
  }
}

void LEEana::set_tree_address(TTree *tree0, PFevalInfo& tagger_info, int flag){
  tagger_info.flag_NCDelta = false;
  tagger_info.flag_showerMomentum = false;
  tagger_info.flag_recoprotonMomentum = false;
  
  tree0->SetBranchAddress("run", &tagger_info.run);
  tree0->SetBranchAddress("subrun", &tagger_info.subrun);
  tree0->SetBranchAddress("event", &tagger_info.event);
  tree0->SetBranchAddress("neutrino_type", &tagger_info.neutrino_type);
  tree0->SetBranchAddress("reco_nuvtxX", &tagger_info.reco_nuvtxX);
  tree0->SetBranchAddress("reco_nuvtxY", &tagger_info.reco_nuvtxY);
  tree0->SetBranchAddress("reco_nuvtxZ", &tagger_info.reco_nuvtxZ);
  tree0->SetBranchAddress("reco_showervtxX", &tagger_info.reco_showervtxX);
  tree0->SetBranchAddress("reco_showervtxY", &tagger_info.reco_showervtxY);
  tree0->SetBranchAddress("reco_showervtxZ", &tagger_info.reco_showervtxZ);
  tree0->SetBranchAddress("reco_showerKE", &tagger_info.reco_showerKE);
  tree0->SetBranchAddress("reco_muonvtxX", &tagger_info.reco_muonvtxX);
  tree0->SetBranchAddress("reco_muonvtxY", &tagger_info.reco_muonvtxY);
  tree0->SetBranchAddress("reco_muonvtxZ", &tagger_info.reco_muonvtxZ);
  tree0->SetBranchAddress("reco_muonMomentum", &tagger_info.reco_muonMomentum[0]);

  if (tree0->GetBranch("reco_showerMomentum")){
    tagger_info.flag_showerMomentum = true;
    tree0->SetBranchAddress("reco_showerMomentum",&tagger_info.reco_showerMomentum[0]);
    tree0->SetBranchAddress("reco_Nproton",&tagger_info.reco_Nproton);
        
    if (flag==1){
      tree0->SetBranchAddress("truth_showerMomentum",&tagger_info.truth_showerMomentum[0]);
      
      tree0->SetBranchAddress("mcflux_run",&tagger_info.mcflux_run);
      tree0->SetBranchAddress("mcflux_evtno",&tagger_info.mcflux_evtno);
      tree0->SetBranchAddress("mcflux_ndecay",&tagger_info.mcflux_ndecay);
      tree0->SetBranchAddress("mcflux_ntype",&tagger_info.mcflux_ntype);
      tree0->SetBranchAddress("mcflux_nuEnergy",&tagger_info.mcflux_nuEnergy);
      tree0->SetBranchAddress("mcflux_vx",&tagger_info.mcflux_vx);
      tree0->SetBranchAddress("mcflux_vy",&tagger_info.mcflux_vy);
      tree0->SetBranchAddress("mcflux_vz",&tagger_info.mcflux_vz);
      tree0->SetBranchAddress("mcflux_genx",&tagger_info.mcflux_genx);
      tree0->SetBranchAddress("mcflux_geny",&tagger_info.mcflux_geny);
      tree0->SetBranchAddress("mcflux_genz",&tagger_info.mcflux_genz);
      tree0->SetBranchAddress("mcflux_dk2gen",&tagger_info.mcflux_dk2gen);
      tree0->SetBranchAddress("mcflux_gen2vtx",&tagger_info.mcflux_gen2vtx);

      tree0->SetBranchAddress("truth_nuScatType",&tagger_info.truth_nuScatType);
      
      tree0->SetBranchAddress("truth_nu_pos", &tagger_info.truth_nu_pos[0]);
      tree0->SetBranchAddress("truth_nu_momentum", &tagger_info.truth_nu_momentum[0]);
    }
  }
  
  if (flag==1){
    tree0->SetBranchAddress("nuvtx_diff", &tagger_info.nuvtx_diff);
    tree0->SetBranchAddress("showervtx_diff", &tagger_info.showervtx_diff);
    tree0->SetBranchAddress("muonvtx_diff", &tagger_info.muonvtx_diff);
    tree0->SetBranchAddress("truth_corr_nuvtxX", &tagger_info.truth_corr_nuvtxX);
    tree0->SetBranchAddress("truth_corr_nuvtxY", &tagger_info.truth_corr_nuvtxY);
    tree0->SetBranchAddress("truth_corr_nuvtxZ", &tagger_info.truth_corr_nuvtxZ);
    tree0->SetBranchAddress("truth_corr_showervtxX", &tagger_info.truth_corr_showervtxX);
    tree0->SetBranchAddress("truth_corr_showervtxY", &tagger_info.truth_corr_showervtxY);
    tree0->SetBranchAddress("truth_corr_showervtxZ", &tagger_info.truth_corr_showervtxZ);
    tree0->SetBranchAddress("truth_showerKE", &tagger_info.truth_showerKE);
    tree0->SetBranchAddress("truth_corr_muonvtxX", &tagger_info.truth_corr_muonvtxX);
    tree0->SetBranchAddress("truth_corr_muonvtxY", &tagger_info.truth_corr_muonvtxY);
    tree0->SetBranchAddress("truth_corr_muonvtxZ", &tagger_info.truth_corr_muonvtxZ);
    tree0->SetBranchAddress("truth_muonvtxX", &tagger_info.truth_muonvtxX);
    tree0->SetBranchAddress("truth_muonvtxY", &tagger_info.truth_muonvtxY);
    tree0->SetBranchAddress("truth_muonvtxZ", &tagger_info.truth_muonvtxZ);
    tree0->SetBranchAddress("truth_muonendX", &tagger_info.truth_muonendX);
    tree0->SetBranchAddress("truth_muonendY", &tagger_info.truth_muonendY);
    tree0->SetBranchAddress("truth_muonendZ", &tagger_info.truth_muonendZ);
    tree0->SetBranchAddress("truth_muonMomentum", &tagger_info.truth_muonMomentum[0]);
    tree0->SetBranchAddress("truth_nuEnergy", &tagger_info.truth_nuEnergy);
    tree0->SetBranchAddress("truth_energyInside", &tagger_info.truth_energyInside);
    tree0->SetBranchAddress("truth_electronInside", &tagger_info.truth_electronInside);
    tree0->SetBranchAddress("truth_nuPdg", &tagger_info.truth_nuPdg);
    tree0->SetBranchAddress("truth_isCC", &tagger_info.truth_isCC);
    tree0->SetBranchAddress("truth_vtxX", &tagger_info.truth_vtxX);
    tree0->SetBranchAddress("truth_vtxY", &tagger_info.truth_vtxY);
    tree0->SetBranchAddress("truth_vtxZ", &tagger_info.truth_vtxZ);
    tree0->SetBranchAddress("truth_nuTime", &tagger_info.truth_nuTime);
    tree0->SetBranchAddress("truth_nuIntType", &tagger_info.truth_nuIntType);

    if (tree0->GetBranch("truth_NCDelta")){
      tagger_info.flag_NCDelta = true;
      tree0->SetBranchAddress("truth_NCDelta",&tagger_info.truth_NCDelta);
      tree0->SetBranchAddress("truth_NprimPio",&tagger_info.truth_NprimPio);
      tree0->SetBranchAddress("truth_pio_energy_1",&tagger_info.truth_pio_energy_1);
      tree0->SetBranchAddress("truth_pio_energy_2",&tagger_info.truth_pio_energy_2);
      tree0->SetBranchAddress("truth_pio_angle",&tagger_info.truth_pio_angle);
      //tree0->SetBranchAddress("reco_protonMomentum",&tagger_info.reco_protonMomentum[0]);
    }

   
    
  }
  if (tree0->GetBranch("reco_protonMomentum")){
    tagger_info.flag_recoprotonMomentum = true;
    tree0->SetBranchAddress("reco_protonMomentum",&tagger_info.reco_protonMomentum[0]);
  }
}

void LEEana::put_tree_address(TTree *tree0, PFevalInfo& tagger_info, int flag){
  tree0->Branch("run", &tagger_info.run, "data/I");
  tree0->Branch("subrun", &tagger_info.subrun,"data/I");
  tree0->Branch("event", &tagger_info.event,"data/I");
  tree0->Branch("neutrino_type", &tagger_info.neutrino_type,"data/I");
  tree0->Branch("reco_nuvtxX", &tagger_info.reco_nuvtxX,"data/F");
  tree0->Branch("reco_nuvtxY", &tagger_info.reco_nuvtxY,"data/F");
  tree0->Branch("reco_nuvtxZ", &tagger_info.reco_nuvtxZ,"data/F");
  tree0->Branch("reco_showervtxX", &tagger_info.reco_showervtxX,"data/F");
  tree0->Branch("reco_showervtxY", &tagger_info.reco_showervtxY,"data/F");
  tree0->Branch("reco_showervtxZ", &tagger_info.reco_showervtxZ,"data/F");
  tree0->Branch("reco_showerKE", &tagger_info.reco_showerKE,"data/F");
  tree0->Branch("reco_muonvtxX", &tagger_info.reco_muonvtxX,"data/F");
  tree0->Branch("reco_muonvtxY", &tagger_info.reco_muonvtxY,"data/F");
  tree0->Branch("reco_muonvtxZ", &tagger_info.reco_muonvtxZ,"data/F");
  tree0->Branch("reco_muonMomentum", &tagger_info.reco_muonMomentum[0],"reco_muonMomentum[4]/F");

  if (flag==1){
    tree0->Branch("nuvtx_diff", &tagger_info.nuvtx_diff,"data/F");
    tree0->Branch("showervtx_diff", &tagger_info.showervtx_diff,"data/F");
    tree0->Branch("muonvtx_diff", &tagger_info.muonvtx_diff,"data/F");
    tree0->Branch("truth_corr_nuvtxX", &tagger_info.truth_corr_nuvtxX,"data/F");
    tree0->Branch("truth_corr_nuvtxY", &tagger_info.truth_corr_nuvtxY,"data/F");
    tree0->Branch("truth_corr_nuvtxZ", &tagger_info.truth_corr_nuvtxZ,"data/F");
    tree0->Branch("truth_corr_showervtxX", &tagger_info.truth_corr_showervtxX,"data/F");
    tree0->Branch("truth_corr_showervtxY", &tagger_info.truth_corr_showervtxY,"data/F");
    tree0->Branch("truth_corr_showervtxZ", &tagger_info.truth_corr_showervtxZ,"data/F");
    tree0->Branch("truth_showerKE", &tagger_info.truth_showerKE,"data/F");
    tree0->Branch("truth_corr_muonvtxX", &tagger_info.truth_corr_muonvtxX,"data/F");
    tree0->Branch("truth_corr_muonvtxY", &tagger_info.truth_corr_muonvtxY,"data/F");
    tree0->Branch("truth_corr_muonvtxZ", &tagger_info.truth_corr_muonvtxZ,"data/F");
    tree0->Branch("truth_muonvtxX", &tagger_info.truth_muonvtxX,"data/F");
    tree0->Branch("truth_muonvtxY", &tagger_info.truth_muonvtxY,"data/F");
    tree0->Branch("truth_muonvtxZ", &tagger_info.truth_muonvtxZ,"data/F");
    tree0->Branch("truth_muonendX", &tagger_info.truth_muonendX,"data/F");
    tree0->Branch("truth_muonendY", &tagger_info.truth_muonendY,"data/F");
    tree0->Branch("truth_muonendZ", &tagger_info.truth_muonendZ,"data/F");
    tree0->Branch("truth_muonMomentum", &tagger_info.truth_muonMomentum[0],"truth_muonMomentum[4]/F");
    tree0->Branch("truth_nuEnergy", &tagger_info.truth_nuEnergy,"data/F");
    tree0->Branch("truth_energyInside", &tagger_info.truth_energyInside,"data/F");
    tree0->Branch("truth_electronInside", &tagger_info.truth_electronInside,"data/F");
    tree0->Branch("truth_nuPdg", &tagger_info.truth_nuPdg,"data/I");
    tree0->Branch("truth_isCC", &tagger_info.truth_isCC,"data/O");
    tree0->Branch("truth_vtxX", &tagger_info.truth_vtxX,"data/F");
    tree0->Branch("truth_vtxY", &tagger_info.truth_vtxY,"data/F");
    tree0->Branch("truth_vtxZ", &tagger_info.truth_vtxZ,"data/F");
    tree0->Branch("truth_nuTime", &tagger_info.truth_nuTime,"data/F");
    tree0->Branch("truth_nuIntType", &tagger_info.truth_nuIntType,"data/I");

    if (tagger_info.flag_NCDelta){
      tree0->Branch("truth_NCDelta",&tagger_info.truth_NCDelta,"truth_NCDelta/I");
      tree0->Branch("truth_NprimPio",&tagger_info.truth_NprimPio,"truth_NprimPio/I");
      tree0->Branch("truth_pio_energy_1",&tagger_info.truth_pio_energy_1,"truth_pio_energy_1/F");
      tree0->Branch("truth_pio_energy_2",&tagger_info.truth_pio_energy_2,"truth_pio_energy_2/F");
      tree0->Branch("truth_pio_angle",&tagger_info.truth_pio_angle,"truth_pio_angle/F");
      //tree0->Branch("reco_protonMomentum",&tagger_info.reco_protonMomentum[0],"reco_protonMomentum[4]/F");
    }
  }

  if (tagger_info.flag_recoprotonMomentum){
    tree0->Branch("reco_protonMomentum",&tagger_info.reco_protonMomentum[0],"reco_protonMomentum[4]/F");
  }

  if (tagger_info.flag_showerMomentum){
    
    tree0->Branch("reco_showerMomentum",&tagger_info.reco_showerMomentum[0],"reco_showerMomentum[4]/F");
    tree0->Branch("reco_Nproton",&tagger_info.reco_Nproton,"reco_Nproton/I");
    
    
    if (flag==1){
      tree0->Branch("truth_showerMomentum",&tagger_info.truth_showerMomentum[0],"truth_showerMomentum[4]/F");
      tree0->Branch("mcflux_run",&tagger_info.mcflux_run,"mcflux_run/I");
      tree0->Branch("mcflux_evtno",&tagger_info.mcflux_evtno,"mcflux_evtno/I");
      tree0->Branch("mcflux_ndecay",&tagger_info.mcflux_ndecay,"mcflux_ndecay/I");
      tree0->Branch("mcflux_ntype",&tagger_info.mcflux_ntype,"mcflux_ntype/I");
      tree0->Branch("truth_nuScatType",&tagger_info.truth_nuScatType,"truth_nuScatType/I");
      
      tree0->Branch("mcflux_nuEnergy",&tagger_info.mcflux_nuEnergy,"mcflux_nuEnergy/F");
      tree0->Branch("mcflux_vx", &tagger_info.mcflux_vx,"mcflux_vx/F");
      tree0->Branch("mcflux_vy", &tagger_info.mcflux_vy,"mcflux_vy/F");
      tree0->Branch("mcflux_vz", &tagger_info.mcflux_vz,"mcflux_vz/F");
      tree0->Branch("mcflux_genx", &tagger_info.mcflux_genx, "mcflux_genx/F");
      tree0->Branch("mcflux_geny", &tagger_info.mcflux_geny, "mcflux_geny/F");
      tree0->Branch("mcflux_genz", &tagger_info.mcflux_genz, "mcflux_genz/F");
      tree0->Branch("mcflux_dk2gen", &tagger_info.mcflux_dk2gen, "mcflux_dk2gen/F");
      tree0->Branch("mcflux_gen2vtx", &tagger_info.mcflux_gen2vtx, "mcflux_gen2vtx/F");
      tree0->Branch("truth_nu_pos", &tagger_info.truth_nu_pos[0],"truth_nu_pos[4]/F");
      tree0->Branch("truth_nu_momentum", &tagger_info.truth_nu_momentum[0], "truth_nu_momentum[4]/F");
    }
  }
  
}



#endif
