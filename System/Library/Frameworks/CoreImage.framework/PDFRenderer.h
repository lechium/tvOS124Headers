/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PDFRenderer : CGRenderer {

	CFDictionaryRef info;
	CFDataRef data;
	CGDataConsumerRef dataConsumer;

}
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(const CFDataRef)pdfdata;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
