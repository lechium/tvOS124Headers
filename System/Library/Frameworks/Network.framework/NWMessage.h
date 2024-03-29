/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, OS_nw_content_context;
@class NSObject;

@interface NWMessage : NSObject {

	NSObject*<OS_dispatch_data> _internalContent;
	NSObject*<OS_nw_content_context> _internalContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_data> internalContent;                   //@synthesize internalContent=_internalContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_content_context> internalContext;              //@synthesize internalContext=_internalContext - In the implementation block
-(id)initWithContent:(id)arg1 context:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)internalContent;
-(void)setInternalContent:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSObject*<OS_nw_content_context>)internalContext;
-(void)setInternalContext:(NSObject*<OS_nw_content_context>)arg1 ;
@end

