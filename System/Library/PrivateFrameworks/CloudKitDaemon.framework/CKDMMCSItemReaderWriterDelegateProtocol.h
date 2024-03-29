/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDMMCSItemReaderWriterDelegateProtocol
@required
-(BOOL)willOpenItemReaderWriter:(id)arg1 error:(id*)arg2;
-(void)didOpenItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(BOOL)willCloseItemReaderWriter:(id)arg1 error:(id*)arg2;
-(void)didCloseItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(BOOL)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id*)arg2;
-(id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3;
-(BOOL)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;
-(BOOL)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;

@end

