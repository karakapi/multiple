#ifndef _UMATH_ASIN_H_
#define _UMATH_ASIN_H_

extern double const umath_asin_lut[1025];

/* 1024 Items for arcsin(0) to arcsin (1) */
double const umath_asin_lut[1025] = 
{
    0.00097656265522 , 0.00195312624177 , 0.00292969169097 , 0.00390625993418 , 0.00488283190276 ,
    0.00585940852813 , 0.00683599074173 , 0.00781257947504 , 0.00878917565963 , 0.00976578022709 ,
    0.0107423941091  , 0.0117190182375  , 0.012695653544   , 0.0136723009607  , 0.0146489614195  ,
    0.0156256358527  , 0.0166023251926  , 0.0175790303714  , 0.0185557523219  , 0.0195324919766  ,
    0.0205092502685  , 0.0214860281305  , 0.0224628264958  , 0.0234396462978  , 0.02441648847    ,
    0.025393353946   , 0.0263702436599  , 0.0273471585458  , 0.028324099538   , 0.0293010675711  ,
    0.0302780635799  , 0.0312550884995  , 0.0322321432651  , 0.0332092288123  , 0.034186346077   ,
    0.0351634959952  , 0.0361406795032  , 0.0371178975378  , 0.038095151036   , 0.0390724409349  ,
    0.0400497681721  , 0.0410271336857  , 0.0420045384137  , 0.0429819832947  , 0.0439594692678  ,
    0.0449369972721  , 0.0459145682472  , 0.0468921831333  , 0.0478698428706  , 0.0488475483999  ,
    0.0498253006624  , 0.0508031005997  , 0.0517809491537  , 0.0527588472669  , 0.053736795882   ,
    0.0547147959424  , 0.0556928483917  , 0.0566709541742  , 0.0576491142344  , 0.0586273295174  ,
    0.0596056009688  , 0.0605839295346  , 0.0615623161615  , 0.0625407617965  , 0.0635192673871  ,
    0.0644978338815  , 0.0654764622282  , 0.0664551533764  , 0.0674339082758  , 0.0684127278767  ,
    0.0693916131299  , 0.0703705649867  , 0.0713495843992  , 0.0723286723198  , 0.0733078297018  ,
    0.0742870574989  , 0.0752663566654  , 0.0762457281564  , 0.0772251729274  , 0.0782046919348  ,
    0.0791842861353  , 0.0801639564867  , 0.081143703947   , 0.0821235294753  , 0.0831034340311  ,
    0.0840834185746  , 0.0850634840669  , 0.0860436314695  , 0.087023861745   , 0.0880041758564  ,
    0.0889845747675  , 0.0899650594431  , 0.0909456308484  , 0.0919262899495  , 0.0929070377133  ,
    0.0938878751075  , 0.0948688031005  , 0.0958498226616  , 0.0968309347609  , 0.097812140369   ,
    0.0987934404579  , 0.0997748359999  , 0.100756327968   , 0.101737917338   , 0.102719605083   ,
    0.10370139218    , 0.104683279605   , 0.105665268336   , 0.106647359353   , 0.107629553634   ,
    0.108611852159   , 0.109594255911   , 0.11057676587    , 0.111559383022   , 0.112542108349   ,
    0.113524942837   , 0.114507887472   , 0.11549094324    , 0.116474111131   , 0.117457392133   ,
    0.118440787236   , 0.119424297431   , 0.12040792371    , 0.121391667067   , 0.122375528496   ,
    0.123359508991   , 0.124343609549   , 0.125327831168   , 0.126312174846   , 0.127296641582   ,
    0.128281232377   , 0.129265948234   , 0.130250790154   , 0.131235759141   , 0.132220856202   ,
    0.133206082342   , 0.134191438568   , 0.13517692589    , 0.136162545317   , 0.13714829786    ,
    0.138134184532   , 0.139120206345   , 0.140106364314   , 0.141092659456   , 0.142079092787   ,
    0.143065665326   , 0.144052378092   , 0.145039232106   , 0.146026228391   , 0.147013367969   ,
    0.148000651866   , 0.148988081108   , 0.149975656722   , 0.150963379737   , 0.151951251182   ,
    0.15293927209    , 0.153927443493   , 0.154915766425   , 0.155904241922   , 0.15689287102    ,
    0.157881654759   , 0.158870594178   , 0.159859690318   , 0.160848944221   , 0.161838356932   ,
    0.162827929497   , 0.163817662962   , 0.164807558376   , 0.165797616789   , 0.166787839252   ,
    0.167778226818   , 0.168768780543   , 0.169759501481   , 0.170750390691   , 0.171741449232   ,
    0.172732678164   , 0.173724078551   , 0.174715651455   , 0.175707397942   , 0.17669931908    ,
    0.177691415938   , 0.178683689585   , 0.179676141093   , 0.180668771538   , 0.181661581993   ,
    0.182654573536   , 0.183647747246   , 0.184641104203   , 0.18563464549    , 0.18662837219    ,
    0.187622285389   , 0.188616386175   , 0.189610675637   , 0.190605154866   , 0.191599824954   ,
    0.192594686996   , 0.193589742089   , 0.194584991331   , 0.195580435822   , 0.196576076663   ,
    0.197571914959   , 0.198567951816   , 0.19956418834    , 0.200560625642   , 0.201557264833   ,
    0.202554107026   , 0.203551153336   , 0.204548404881   , 0.205545862779   , 0.206543528152   ,
    0.207541402124   , 0.208539485819   , 0.209537780364   , 0.210536286888   , 0.211535006524   ,
    0.212533940404   , 0.213533089663   , 0.21453245544    , 0.215532038873   , 0.216531841104   ,
    0.217531863277   , 0.218532106539   , 0.219532572037   , 0.220533260921   , 0.221534174344   ,
    0.22253531346    , 0.223536679427   , 0.224538273403   , 0.22554009655    , 0.226542150031   ,
    0.227544435013   , 0.228546952662   , 0.22954970415    , 0.230552690649   , 0.231555913335   ,
    0.232559373384   , 0.233563071976   , 0.234567010294   , 0.235571189521   , 0.236575610846   ,
    0.237580275456   , 0.238585184543   , 0.239590339302   , 0.24059574093    , 0.241601390624   ,
    0.242607289588   , 0.243613439024   , 0.244619840139   , 0.245626494143   , 0.246633402247   ,
    0.247640565665   , 0.248647985613   , 0.249655663312   , 0.250663599983   , 0.251671796851   ,
    0.252680255142   , 0.253688976087   , 0.254697960919   , 0.255707210871   , 0.256716727184   ,
    0.257726511096   , 0.258736563852   , 0.259746886697   , 0.26075748088    , 0.261768347654   ,
    0.262779488272   , 0.263790903993   , 0.264802596075   , 0.265814565782   , 0.266826814381   ,
    0.267839343139   , 0.268852153328   , 0.269865246224   , 0.270878623103   , 0.271892285246   ,
    0.272906233937   , 0.273920470461   , 0.274934996109   , 0.275949812173   , 0.276964919949   ,
    0.277980320734   , 0.278996015831   , 0.280012006545   , 0.281028294184   , 0.282044880058   ,
    0.283061765482   , 0.284078951774   , 0.285096440253   , 0.286114232244   , 0.287132329073   ,
    0.288150732072   , 0.289169442573   , 0.290188461914   , 0.291207791434   , 0.292227432477   ,
    0.293247386391   , 0.294267654524   , 0.295288238232   , 0.29630913887    , 0.2973303578     ,
    0.298351896385   , 0.299373755992   , 0.300395937993   , 0.301418443762   , 0.302441274677   ,
    0.303464432119   , 0.304487917473   , 0.305511732128   , 0.306535877476   , 0.307560354914   ,
    0.30858516584    , 0.309610311658   , 0.310635793774   , 0.3116616136     , 0.312687772551   ,
    0.313714272043   , 0.314741113499   , 0.315768298344   , 0.31679582801    , 0.317823703928   ,
    0.318851927536   , 0.319880500276   , 0.320909423593   , 0.321938698935   , 0.322968327756   ,
    0.323998311514   , 0.325028651668   , 0.326059349685   , 0.327090407033   , 0.328121825186   ,
    0.329153605622   , 0.330185749821   , 0.331218259271   , 0.332251135459   , 0.333284379882   ,
    0.334317994036   , 0.335351979426   , 0.336386337557   , 0.337421069941   , 0.338456178094   ,
    0.339491663535   , 0.340527527789   , 0.341563772385   , 0.342600398856   , 0.343637408739   ,
    0.344674803577   , 0.345712584917   , 0.346750754309   , 0.34778931331    , 0.34882826348    ,
    0.349867606384   , 0.350907343591   , 0.351947476677   , 0.35298800722    , 0.354028936804   ,
    0.355070267018   , 0.356111999455   , 0.357154135713   , 0.358196677396   , 0.359239626112   ,
    0.360282983473   , 0.361326751097   , 0.362370930608   , 0.363415523632   , 0.364460531804   ,
    0.36550595676    , 0.366551800144   , 0.367598063603   , 0.368644748792   , 0.369691857369   ,
    0.370739390997   , 0.371787351345   , 0.372835740087   , 0.373884558904   , 0.37493380948    ,
    0.375983493504   , 0.377033612674   , 0.378084168689   , 0.379135163256   , 0.380186598088   ,
    0.381238474902   , 0.382290795421   , 0.383343561374   , 0.384396774496   , 0.385450436525   ,
    0.386504549209   , 0.387559114299   , 0.388614133552   , 0.389669608731   , 0.390725541605   ,
    0.391781933948   , 0.392838787543   , 0.393896104175   , 0.394953885636   , 0.396012133727   ,
    0.397070850251   , 0.39813003702    , 0.39918969585    , 0.400249828565   , 0.401310436994   ,
    0.402371522972   , 0.403433088343   , 0.404495134953   , 0.405557664658   , 0.406620679318   ,
    0.407684180802   , 0.408748170982   , 0.40981265174    , 0.410877624963   , 0.411943092544   ,
    0.413009056384   , 0.41407551839    , 0.415142480474   , 0.416209944559   , 0.41727791257    ,
    0.418346386443   , 0.419415368119   , 0.420484859545   , 0.421554862676   , 0.422625379474   ,
    0.423696411909   , 0.424767961956   , 0.4258400316     , 0.42691262283    , 0.427985737644   ,
    0.429059378048   , 0.430133546053   , 0.431208243681   , 0.432283472957   , 0.433359235917   ,
    0.434435534603   , 0.435512371064   , 0.436589747359   , 0.437667665553   , 0.438746127717   ,
    0.439825135934   , 0.440904692291   , 0.441984798884   , 0.443065457818   , 0.444146671205   ,
    0.445228441166   , 0.446310769828   , 0.447393659328   , 0.44847711181    , 0.449561129428   ,
    0.450645714342   , 0.451730868722   , 0.452816594745   , 0.453902894598   , 0.454989770476   ,
    0.456077224581   , 0.457165259127   , 0.458253876332   , 0.459343078427   , 0.46043286765    ,
    0.461523246247   , 0.462614216474   , 0.463705780596   , 0.464797940887   , 0.465890699629   ,
    0.466984059114   , 0.468078021644   , 0.469172589528   , 0.470267765086   , 0.471363550647   ,
    0.472459948551   , 0.473556961143   , 0.474654590783   , 0.475752839836   , 0.47685171068    ,
    0.477951205701   , 0.479051327296   , 0.48015207787    , 0.481253459841   , 0.482355475632   ,
    0.483458127682   , 0.484561418436   , 0.485665350351   , 0.486769925893   , 0.48787514754    ,
    0.488981017779   , 0.490087539109   , 0.491194714037   , 0.492302545083   , 0.493411034777   ,
    0.49452018566    , 0.495630000283   , 0.496740481208   , 0.497851631009   , 0.49896345227    ,
    0.500075947588   , 0.501189119568   , 0.502302970829   , 0.503417504001   , 0.504532721724   ,
    0.505648626651   , 0.506765221447   , 0.507882508786   , 0.509000491356   , 0.510119171857   ,
    0.511238553001   , 0.512358637509   , 0.513479428119   , 0.514600927577   , 0.515723138644   ,
    0.516846064092   , 0.517969706705   , 0.51909406928    , 0.520219154629   , 0.521344965572   ,
    0.522471504946   , 0.523598775598   , 0.524726780391   , 0.525855522197   , 0.526985003906   ,
    0.528115228416   , 0.529246198643   , 0.530377917514   , 0.53151038797    , 0.532643612966   ,
    0.53377759547    , 0.534912338464   , 0.536047844944   , 0.537184117921   , 0.538321160419   ,
    0.539458975477   , 0.540597566148   , 0.541736935498   , 0.542877086611   , 0.544018022582   ,
    0.545159746522   , 0.546302261559   , 0.547445570833   , 0.548589677501   , 0.549734584734   ,
    0.550880295719   , 0.552026813658   , 0.553174141768   , 0.554322283284   , 0.555471241455   ,
    0.556621019546   , 0.557771620837   , 0.558923048626   , 0.560075306227   , 0.561228396969   ,
    0.562382324198   , 0.563537091278   , 0.564692701589   , 0.565849158526   , 0.567006465504   ,
    0.568164625953   , 0.569323643321   , 0.570483521073   , 0.571644262692   , 0.57280587168    ,
    0.573968351552   , 0.575131705848   , 0.576295938119   , 0.577461051939   , 0.578627050899   ,
    0.579793938608   , 0.580961718693   , 0.582130394802   , 0.5832999706     , 0.584470449771   ,
    0.58564183602    , 0.586814133069   , 0.587987344661   , 0.58916147456    , 0.590336526546   ,
    0.591512504422   , 0.59268941201    , 0.593867253153   , 0.595046031714   , 0.596225751577   ,
    0.597406416645   , 0.598588030845   , 0.599770598123   , 0.600954122446   , 0.602138607804   ,
    0.603324058207   , 0.604510477688   , 0.605697870303   , 0.606886240126   , 0.608075591259   ,
    0.609265927821   , 0.610457253958   , 0.611649573837   , 0.612842891647   , 0.614037211603   ,
    0.615232537941   , 0.616428874922   , 0.61762622683    , 0.618824597974   , 0.620023992686   ,
    0.621224415323   , 0.622425870268   , 0.623628361926   , 0.62483189473    , 0.626036473137   ,
    0.627242101628   , 0.628448784711   , 0.629656526921   , 0.630865332818   , 0.632075206988   ,
    0.633286154045   , 0.634498178627   , 0.635711285401   , 0.636925479063   , 0.638140764332   ,
    0.639357145959   , 0.640574628721   , 0.641793217423   , 0.643012916898   , 0.64423373201    ,
    0.64545566765    , 0.646678728738   , 0.647902920225   , 0.649128247091   , 0.650354714345   ,
    0.651582327027   , 0.652811090207   , 0.654041008988   , 0.655272088501   , 0.65650433391    ,
    0.65773775041    , 0.658972343228   , 0.660208117623   , 0.661445078888   , 0.662683232346   ,
    0.663922583355   , 0.665163137305   , 0.666404899621   , 0.667647875762   , 0.66889207122    ,
    0.670137491521   , 0.671384142229   , 0.67263202894    , 0.673881157286   , 0.675131532937   ,
    0.676383161597   , 0.677636049007   , 0.678890200946   , 0.680145623228   , 0.681402321706   ,
    0.682660302271   , 0.683919570852   , 0.685180133417   , 0.686441995971   , 0.68770516456    ,
    0.688969645271   , 0.690235444228   , 0.691502567598   , 0.692771021587   , 0.694040812443   ,
    0.695311946457   , 0.696584429959   , 0.697858269325   , 0.699133470971   , 0.700410041357   ,
    0.701687986988   , 0.702967314411   , 0.704248030219   , 0.70553014105    , 0.706813653587   ,
    0.708098574559   , 0.70938491074    , 0.710672668953   , 0.711961856067   , 0.713252478999   ,
    0.714544544713   , 0.715838060225   , 0.717133032597   , 0.71842946894    , 0.719727376419   ,
    0.721026762246   , 0.722327633687   , 0.723629998056   , 0.724933862724   , 0.72623923511    ,
    0.727546122691   , 0.728854532993   , 0.7301644736     , 0.73147595215    , 0.732788976336   ,
    0.734103553908   , 0.735419692671   , 0.73673740049    , 0.738056685285   , 0.739377555036   ,
    0.740700017783   , 0.742024081623   , 0.743349754718   , 0.744677045285   , 0.746005961609   ,
    0.747336512031   , 0.748668704961   , 0.750002548869   , 0.75133805229    , 0.752675223824   ,
    0.754014072139   , 0.755354605966   , 0.756696834106   , 0.758040765426   , 0.759386408864   ,
    0.760733773426   , 0.762082868188   , 0.763433702298   , 0.764786284974   , 0.76614062551    ,
    0.767496733271   , 0.768854617696   , 0.7702142883     , 0.771575754674   , 0.772939026487   ,
    0.774304113483   , 0.775671025486   , 0.777039772401   , 0.77841036421    , 0.77978281098    ,
    0.781157122858   , 0.782533310076   , 0.783911382947   , 0.785291351873   , 0.78667322734    ,
    0.788057019923   , 0.789442740282   , 0.79083039917    , 0.792220007429   , 0.793611575991   ,
    0.795005115882   , 0.796400638222   , 0.797798154226   , 0.799197675203   , 0.80059921256    ,
    0.802002777804   , 0.803408382539   , 0.804816038471   , 0.806225757408   , 0.807637551261   ,
    0.809051432045   , 0.810467411882   , 0.811885503001   , 0.813305717737   , 0.814728068537   ,
    0.816152567961   , 0.817579228677   , 0.81900806347    , 0.820439085242   , 0.821872307008   ,
    0.823307741904   , 0.824745403185   , 0.82618530423    , 0.827627458538   , 0.829071879734   ,
    0.830518581569   , 0.831967577923   , 0.833418882806   , 0.834872510357   , 0.83632847485    ,
    0.837786790695   , 0.839247472437   , 0.840710534761   , 0.84217599249    , 0.843643860591   ,
    0.845114154178   , 0.846586888506   , 0.848062078981   , 0.849539741162   , 0.851019890755   ,
    0.852502543624   , 0.853987715789   , 0.855475423429   , 0.856965682883   , 0.858458510656   ,
    0.859953923414   , 0.861451937997   , 0.862952571409   , 0.864455840833   , 0.865961763622   ,
    0.867470357311   , 0.868981639613   , 0.870495628424   , 0.872012341827   , 0.873531798093   ,
    0.875054015684   , 0.876579013256   , 0.878106809661   , 0.879637423954   , 0.881170875388   ,
    0.882707183427   , 0.88424636774    , 0.88578844821    , 0.887333444936   , 0.888881378233   ,
    0.890432268642   , 0.891986136926   , 0.893543004078   , 0.895102891325   , 0.896665820128   ,
    0.898231812189   , 0.899800889453   , 0.901373074114   , 0.902948388616   , 0.904526855659   ,
    0.906108498202   , 0.907693339468   , 0.90928140295    , 0.910872712409   , 0.912467291888   ,
    0.914065165707   , 0.915666358474   , 0.917270895089   , 0.918878800745   , 0.920490100938   ,
    0.922104821467   , 0.923722988444   , 0.925344628297   , 0.926969767774   , 0.928598433952   ,
    0.930230654237   , 0.931866456378   , 0.933505868465   , 0.935148918939   , 0.936795636599   ,
    0.938446050604   , 0.940100190485   , 0.941758086146   , 0.943419767876   , 0.945085266352   ,
    0.946754612648   , 0.94842783824    , 0.950104975018   , 0.951786055288   , 0.953471111784   ,
    0.955160177673   , 0.956853286566   , 0.958550472523   , 0.960251770065   , 0.961957214179   ,
    0.96366684033    , 0.965380684469   , 0.967098783043   , 0.968821173003   , 0.970547891815   ,
    0.972278977471   , 0.974014468498   , 0.975754403967   , 0.97749882351    , 0.979247767323   ,
    0.981001276185   , 0.982759391463   , 0.98452215513    , 0.986289609775   , 0.988061798613   ,
    0.989838765502   , 0.991620554957   , 0.993407212159   , 0.995198782973   , 0.996995313961   ,
    0.998796852399   , 1.00060344629    , 1.00241514438    , 1.00423199617    , 1.00605405196    ,
    1.0078813628     , 1.00971398061    , 1.01155195808    , 1.01339534878    , 1.01524420716    ,
    1.01709858852    , 1.0189585491     , 1.02082414605    , 1.02269543748    , 1.02457248247    ,
    1.02645534109    , 1.02834407444    , 1.03023874465    , 1.03213941493    , 1.03404614957    ,
    1.03595901399    , 1.03787807477    , 1.03980339965    , 1.04173505759    , 1.04367311876    ,
    1.04561765463    , 1.04756873796    , 1.04952644282    , 1.05149084469    , 1.05346202042    ,
    1.05544004832    , 1.05742500815    , 1.05941698123    , 1.0614160504     , 1.06342230013    ,
    1.06543581651    , 1.06745668733    , 1.06948500212    , 1.07152085219    , 1.07356433068    ,
    1.07561553262    , 1.07767455499    , 1.07974149674    , 1.08181645891    , 1.08389954462    ,
    1.0859908592     , 1.08809051018    , 1.09019860745    , 1.09231526323    , 1.09444059222    ,
    1.09657471164    , 1.09871774132    , 1.10086980376    , 1.10303102426    , 1.10520153096    ,
    1.10738145496    , 1.10957093041    , 1.1117700946     , 1.11397908808    , 1.11619805478    ,
    1.11842714208    , 1.12066650096    , 1.12291628613    , 1.12517665614    , 1.12744777353    ,
    1.12972980495    , 1.13202292134    , 1.13432729806    , 1.13664311505    , 1.13897055703    ,
    1.14130981363    , 1.14366107962    , 1.1460245551     , 1.14840044568    , 1.1507889627     ,
    1.15319032349    , 1.15560475157    , 1.15803247692    , 1.16047373625    , 1.16292877326    ,
    1.16539783892    , 1.16788119184    , 1.17037909853    , 1.17289183377    , 1.17541968097    ,
    1.17796293257    , 1.18052189042    , 1.18309686624    , 1.18568818203    , 1.18829617061    ,
    1.1909211761     , 1.19356355444    , 1.19622367405    , 1.19890191635    , 1.20159867647    ,
    1.20431436395    , 1.20704940347    , 1.20980423562    , 1.2125793178     , 1.2153751251     ,
    1.21819215129    , 1.2210309098     , 1.22389193495    , 1.22677578305    , 1.22968303372    ,
    1.23261429133    , 1.23557018642    , 1.23855137737    , 1.24155855216    , 1.2445924302     ,
    1.24765376444    , 1.25074334357    , 1.25386199446    , 1.25701058475    , 1.26019002579    ,
    1.26340127571    , 1.2666453429     , 1.26992328977    , 1.27323623685    , 1.2765853674     ,
    1.27997193239    , 1.28339725604    , 1.28686274201    , 1.29036988019    , 1.29392025434    ,
    1.29751555052    , 1.30115756663    , 1.30484822305    , 1.30858957467    , 1.3123838244     ,
    1.31623333858    , 1.32014066446    , 1.32410855013    , 1.32813996743    , 1.33223813832    ,
    1.33640656529    , 1.34064906689    , 1.34496981903    , 1.34937340365    , 1.35386486626    ,
    1.35844978423    , 1.36313434887    , 1.36792546422    , 1.3728308676     , 1.37785927738    ,
    1.38302057658    , 1.38832604284    , 1.39378864051    , 1.39942339634    , 1.40524789012    ,
    1.41128290643    , 1.4175533173     , 1.42408930436    , 1.43092809527    , 1.43811650645    ,
    1.4457148032     , 1.45380282211    , 1.46249022352    , 1.47193489523    , 1.48237918158    ,
    1.49423107188    , 1.5082861498     , 1.52659855565    , 1.57079632679    ,
};

#endif
