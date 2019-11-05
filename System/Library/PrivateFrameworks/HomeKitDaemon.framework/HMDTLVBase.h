/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVDescription.h>

@class NSData;

@interface HMDTLVBase : HMDTLVDescription {

	NSData* _tlvDatablob;

}

@property (nonatomic,readonly) NSData * tlvDatablob;              //@synthesize tlvDatablob=_tlvDatablob - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(BOOL)_parse:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSData *)tlvDatablob;
-(BOOL)_parseMandatory:(id)arg1 optional:(id)arg2 ;
-(id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(/*^block*/id)arg3 ;
-(BOOL)_parseFields:(id)arg1 ;
@end
