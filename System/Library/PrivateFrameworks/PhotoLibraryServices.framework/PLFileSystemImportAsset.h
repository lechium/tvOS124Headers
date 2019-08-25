/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableSet;

@interface PLFileSystemImportAsset : NSObject {

	int assetKind;
	NSMutableSet* _urls;
	NSObject* _destinationAlbum;

}

@property (nonatomic,retain) NSMutableSet * urls;                                      //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> destinationAlbum;              //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (assign,nonatomic) int assetKind; 
-(NSMutableSet *)urls;
-(void)setUrls:(NSMutableSet *)arg1 ;
-(id)initWithURLs:(id)arg1 destinationAlbum:(NSObject*)arg2 assetKind:(int)arg3 ;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(int)assetKind;
-(BOOL)isCameraKit;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setAssetKind:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
@end
