/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {

	TCPIO_BlockCallbacks_Listener* _readListener;
	TCPIO_BlockCallbacks_Listener* _writeListener;

}
-(void)setReadListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(void)setWriteListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(BOOL)withListeners:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

