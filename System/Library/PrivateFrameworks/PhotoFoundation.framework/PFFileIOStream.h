/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFFileIStream.h>
#import <PhotoFoundation/PFOStream.h>

@class NSString;

@interface PFFileIOStream : PFFileIStream <PFOStream>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)reserveLength:(long long)arg1 ;
-(BOOL)writeStream:(const char*)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3 ;
-(BOOL)writeStream:(id)arg1 ;
-(BOOL)writeStream:(id)arg1 blockSize:(unsigned long long)arg2 ;
-(BOOL)truncateLength:(long long)arg1 ;
-(BOOL)openStream;
@end

