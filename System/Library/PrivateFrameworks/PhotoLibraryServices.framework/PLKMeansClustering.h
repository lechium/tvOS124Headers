/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering {

	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double*)_dataArray:(id)arg1 featureCount:(unsigned)arg2 useKeypaths:(BOOL)arg3 ;
-(id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

