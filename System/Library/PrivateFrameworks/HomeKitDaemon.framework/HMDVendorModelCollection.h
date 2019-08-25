/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMDVendorModelEntry;

@interface HMDVendorModelCollection : HMFObject {

	NSMutableArray* _vendorModelCollection;
	HMDVendorModelEntry* _defaultEntry;

}

@property (nonatomic,readonly) NSMutableArray * vendorModelCollection;              //@synthesize vendorModelCollection=_vendorModelCollection - In the implementation block
@property (nonatomic,retain) HMDVendorModelEntry * defaultEntry;                    //@synthesize defaultEntry=_defaultEntry - In the implementation block
-(NSMutableArray *)vendorModelCollection;
-(HMDVendorModelEntry *)defaultEntry;
-(id)lookupModel:(id)arg1 ;
-(void)setDefaultEntry:(HMDVendorModelEntry *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)addEntry:(id)arg1 ;
@end
