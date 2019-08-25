/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Espresso/Espresso-Structs.h>
@class NSMutableDictionary, NSObject, NSString;

@interface EspressoFDOverfeatNetwork : NSObject {

	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* gpu_nets;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* ecpu_nets;
	vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >* net_scales;
	vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >* full_scales;
	vector<double, std::__1::allocator<double> >* scalesc;
	vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >* resizers_for_batching;
	int n_resizers_for_batching;
	vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >* probBlobs;
	vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >* boxBlobs;
	NSMutableDictionary* _errorForLayers;
	pair<unsigned long long, unsigned long long> cropDims;
	CGColorSpaceRef colorSpace;
	net_strides_configuration* strideConf;
	int retile_stride;
	int retile_tile_sz;
	vector<int, std::__1::allocator<int> >* retile_n_outputs_v;
	int tile_w_1;
	int tile_h_1;
	NSObject*<OS_dispatch_queue> cpu_queue_0;
	NSObject*<OS_dispatch_semaphore> cpu_semaphore;
	BOOL _useGPUScaler;
	int _scalingMode;
	float _maxScale;
	int _forceMaxNScales;
	int _scaleConfig;
	int _mode;
	int _cpin;
	NSString* _basename;
	NSString* _weights;
	shared_ptr<Espresso::abstract_context>* _context_metal;
	shared_ptr<Espresso::abstract_context>* _context_cpu;

}

@property (nonatomic,retain) NSString * basename;                                                //@synthesize basename=_basename - In the implementation block
@property (nonatomic,retain) NSString * weights;                                                 //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) int scaleConfig;                                                    //@synthesize scaleConfig=_scaleConfig - In the implementation block
@property (assign,nonatomic) int mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int cpin;                                                           //@synthesize cpin=_cpin - In the implementation block
@property (assign,nonatomic) BOOL useGPUScaler;                                                  //@synthesize useGPUScaler=_useGPUScaler - In the implementation block
@property (assign,nonatomic) int scalingMode;                                                    //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) float maxScale;                                                     //@synthesize maxScale=_maxScale - In the implementation block
@property (assign,nonatomic) shared_ptr<Espresso::abstract_context>* context_metal;              //@synthesize context_metal=_context_metal - In the implementation block
@property (assign,nonatomic) shared_ptr<Espresso::abstract_context>* context_cpu;                //@synthesize context_cpu=_context_cpu - In the implementation block
@property (assign,nonatomic) int forceMaxNScales;                                                //@synthesize forceMaxNScales=_forceMaxNScales - In the implementation block
-(void)setWeights:(NSString *)arg1 ;
-(NSString *)weights;
-(net_strides_configuration*)strideConfiguration;
-(float)maxScale;
-(int)getNumScales;
-(shared_ptr<Espresso::fast_pyramid_resizer>*)resizerAtIndex:(int)arg1 ;
-(shared_ptr<Espresso::blob<float, 3> >*)probBlobForScale:(int)arg1 ;
-(shared_ptr<Espresso::blob<float, 3> >*)boxBlobForScale:(int)arg1 ;
-(double)getScale:(int)arg1 ;
-(int)scaleConfig;
-(int)cpin;
-(void)setScaleConfig:(int)arg1 ;
-(void)setCpin:(int)arg1 ;
-(void)retryLoadingCaffeNet:(shared_ptr<Espresso::net>*)arg1 name:(id)arg2 weights:(id)arg3 context:(shared_ptr<Espresso::abstract_context>*)arg4 cp:(int)arg5 ;
-(void)setup_retile;
-(void)setMaxScale:(float)arg1 ;
-(void)generatePyramid:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 ;
-(void)processPyramid:(shared_ptr<Espresso::fast_pyramid_resizer>*)arg1 ;
-(void)processPyramid:(shared_ptr<Espresso::fast_pyramid_resizer>*)arg1 gpu_resizer:(id)arg2 ;
-(void)forward_cpu_network_at_index:(int)arg1 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg2 ;
-(BOOL)needRetiling:(int)arg1 ;
-(void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const shared_ptr<Espresso::net>*)arg2 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg3 ;
-(int)default_retile_outputs;
-(void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const shared_ptr<Espresso::net>*)arg2 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg3 ;
-(int)resizerCount;
-(shared_ptr<Espresso::net>*)gpu_net:(int)arg1 ;
-(shared_ptr<Espresso::net>*)cpu_net:(int)arg1 ;
-(void)processBlob:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 ;
-(void)storeDataForPruning:(shared_ptr<Espresso::blob<float, 4> >*)arg1 prob:(float)arg2 ;
-(id)errorForLayers;
-(BOOL)useGPUScaler;
-(void)setUseGPUScaler:(BOOL)arg1 ;
-(shared_ptr<Espresso::abstract_context>*)context_metal;
-(shared_ptr<Espresso::abstract_context>*)context_cpu;
-(int)forceMaxNScales;
-(void)setContext_metal:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(void)setContext_cpu:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(BOOL)arg7 useLowPriorityMode:(BOOL)arg8 gpuPriority:(int)arg9 ;
-(void)setForceMaxNScales:(int)arg1 ;
-(void)wipeLayersMemory;
-(void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(BOOL)arg2 gpuPriority:(int)arg3 ;
-(void)processBlobNoRotation:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3 ;
-(int)scalingMode;
-(void)setScalingMode:(int)arg1 ;
-(void)setBasename:(NSString *)arg1 ;
-(NSString *)basename;
-(id)init;
-(void)dealloc;
-(void)reset;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end

