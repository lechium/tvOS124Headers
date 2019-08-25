/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface DEExtensionManager : NSObject {

	BOOL _extendedLoaded;
	NSObject*<OS_dispatch_queue> _initialLoadQueue;
	NSArray* _extensions;
	/*^block*/id _afterExtendedBlock;

}

@property (nonatomic,retain) NSArray * extensions;                                       //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy) id afterExtendedBlock;                                        //@synthesize afterExtendedBlock=_afterExtendedBlock - In the implementation block
@property (assign,nonatomic) BOOL extendedLoaded;                                        //@synthesize extendedLoaded=_extendedLoaded - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initialLoadQueue;              //@synthesize initialLoadQueue=_initialLoadQueue - In the implementation block
+(id)sharedInstance;
-(void)setInitialLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAfterExtendedBlock:(id)arg1 ;
-(void)setExtendedLoaded:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)initialLoadQueue;
-(id)afterExtendedBlock;
-(BOOL)extendedLoaded;
-(id)extensionForIdentifier:(id)arg1 ;
-(void)loadExtensions;
-(id)extensionsWithFilter:(id)arg1 ;
-(id)init;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
@end

