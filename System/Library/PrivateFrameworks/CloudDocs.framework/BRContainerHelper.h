/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRContainerHelper <NSObject>
@required
-(id)itemIDForURL:(id)arg1 error:(id*)arg2;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
-(id)fetchContainerForURL:(id)arg1;
-(id)fetchAllContainersByIDWithError:(id*)arg1;
-(BOOL)canFetchAllContainersByID;

@end

