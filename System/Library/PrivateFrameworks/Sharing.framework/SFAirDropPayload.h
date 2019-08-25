/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSString, UIImage;

@interface SFAirDropPayload : NSObject {

	BOOL _wasString;
	NSURL* _URL;
	NSData* _data;
	NSString* _type;
	UIImage* _previewImage;
	NSString* _payloadDescription;
	long long _identifer;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (assign,nonatomic) long long identifer;                      //@synthesize identifer=_identifer - In the implementation block
@property (assign,nonatomic) BOOL wasString;                           //@synthesize wasString=_wasString - In the implementation block
+(id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5 ;
+(id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(long long)identifer;
-(void)setIdentifer:(long long)arg1 ;
-(BOOL)wasString;
-(void)setWasString:(BOOL)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

