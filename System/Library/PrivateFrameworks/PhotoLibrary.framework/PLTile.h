/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLTile : NSObject {

	IOSurfaceRef _decodedSurface;
	CGRect _imageRect;
	id _tileId;
	BOOL _visible;

}
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(void)setTileId:(id)arg1 ;
-(id)tileId;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
@end

