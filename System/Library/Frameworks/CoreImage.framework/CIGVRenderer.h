/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CIGVRenderer <GVRenderer>
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@required
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2;
-(void)drawNode:(id)arg1;
-(void)drawEdge:(id)arg1 withPath:(id)arg2;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1;
-(void)flushRender;
-(void)setSeparation:(CGSize)arg1;
-(void)setDrawEdgesFirst:(BOOL)arg1;
-(void)setFileURL:(id)arg1;
-(int)direction;
-(void)setDirection:(int)arg1;

@end
