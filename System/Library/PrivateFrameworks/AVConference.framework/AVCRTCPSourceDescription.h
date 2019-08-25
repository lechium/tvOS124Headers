/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class NSString;

@interface AVCRTCPSourceDescription : AVCRTCPPacket {

	unsigned char _type;
	NSString* _text;

}

@property (assign,nonatomic) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
@end
