/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSURL, NSString;

@interface DOTRenderer : NSObject <CIGVRenderer> {

	_sFILE* file;
	NSURL* fileURL;
	NSString* fileTitle;
	BOOL drawEdgesFirst;
	int direction;
	CGSize separation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int direction; 
@property (readonly) CGSize separation; 
@property (readonly) BOOL drawEdgesFirst; 
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)drawNode:(id)arg1 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setSeparation:(CGSize)arg1 ;
-(void)setDrawEdgesFirst:(BOOL)arg1 ;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)direction;
-(void)setDirection:(int)arg1 ;
@end
