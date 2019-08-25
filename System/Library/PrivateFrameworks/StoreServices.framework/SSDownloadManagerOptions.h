/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {

	NSArray* _downloadKinds;
	BOOL _filterExternalOriginatedDownloads;
	NSString* _persistenceIdentifier;
	NSArray* _prefetchedDownloadExternalProperties;
	NSArray* _prefetchedDownloadProperties;
	BOOL _ignoreDivertedDownloads;

}

@property (nonatomic,copy) NSArray * prefetchedDownloadExternalProperties;              //@synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties - In the implementation block
@property (assign,nonatomic) BOOL ignoreDivertedDownloads;                              //@synthesize ignoreDivertedDownloads=_ignoreDivertedDownloads - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                     //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * prefetchedDownloadProperties;                      //@synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize filterExternalOriginatedDownloads=_filterExternalOriginatedDownloads - In the implementation block
-(NSArray *)downloadKinds;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(NSArray *)prefetchedDownloadExternalProperties;
-(NSArray *)prefetchedDownloadProperties;
-(NSString *)persistenceIdentifier;
-(BOOL)ignoreDivertedDownloads;
-(void)setIgnoreDivertedDownloads:(BOOL)arg1 ;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(void)setPrefetchedDownloadExternalProperties:(NSArray *)arg1 ;
-(void)setPrefetchedDownloadProperties:(NSArray *)arg1 ;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
