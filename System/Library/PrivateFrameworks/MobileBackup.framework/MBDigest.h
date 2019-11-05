/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MBDigest : NSObject
+(id)sha1ForString:(id)arg1 ;
+(id)sha1ForData:(id)arg1 ;
+(id)sha1;
+(id)sha256;
+(id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sha1HmacForString:(id)arg1 key:(id)arg2 ;
+(long long)simpleChecksumForString:(id)arg1 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)digestForData:(id)arg1 ;
-(id)digestForFileAtPath:(id)arg1 error:(id*)arg2 ;
-(id)digestForString:(id)arg1 ;
-(id)final;
-(BOOL)updateWithFile:(id)arg1 error:(id*)arg2 ;
-(void)updateWithInt64:(long long)arg1 ;
-(void)updateWithInt32:(int)arg1 ;
@end
