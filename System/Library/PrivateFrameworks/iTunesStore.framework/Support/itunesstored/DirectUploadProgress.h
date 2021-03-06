/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@interface DirectUploadProgress : NSObject <NSCopying> {

	long long _countOfBytesExpectedToSend;
	long long _countOfBytesSent;
	long long _uploadDatabaseIdentifier;

}

@property (assign,nonatomic) long long uploadDatabaseIdentifier;                //@synthesize uploadDatabaseIdentifier=_uploadDatabaseIdentifier - In the implementation block
@property (assign,nonatomic) long long countOfBytesExpectedToSend;              //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                        //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(long long)uploadDatabaseIdentifier;
-(void)setUploadDatabaseIdentifier:(long long)arg1 ;
@end

