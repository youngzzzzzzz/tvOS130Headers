/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENTProtocol.h>

@protocol ENTTransport;
@class NSString;

@interface ENTBinaryProtocol : NSObject <ENTProtocol> {

	BOOL _strictRead;
	BOOL _strictWrite;
	int _messageSizeLimit;
	id<ENTTransport> _transport;

}

@property (nonatomic,retain) id<ENTTransport> transport;              //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) BOOL strictRead;                         //@synthesize strictRead=_strictRead - In the implementation block
@property (assign,nonatomic) BOOL strictWrite;                        //@synthesize strictWrite=_strictWrite - In the implementation block
@property (assign,nonatomic) int messageSizeLimit;                    //@synthesize messageSizeLimit=_messageSizeLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)readDouble;
-(id)readString;
-(id<ENTTransport>)transport;
-(void)setTransport:(id<ENTTransport>)arg1 ;
-(void)writeString:(id)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(int)readI32;
-(void)readFieldEnd;
-(void)readStructEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeFieldEnd;
-(void)writeI32:(int)arg1 ;
-(void)writeFieldStop;
-(void)writeStructEnd;
-(BOOL)readBool;
-(unsigned char)readByte;
-(short)readI16;
-(long long)readI64;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(id)readBinary;
-(void)writeBool:(BOOL)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeI16:(short)arg1 ;
-(void)writeI64:(long long)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(id)initWithTransport:(id)arg1 strictRead:(BOOL)arg2 strictWrite:(BOOL)arg3 ;
-(void)setStrictRead:(BOOL)arg1 ;
-(void)setStrictWrite:(BOOL)arg1 ;
-(BOOL)strictRead;
-(int)messageSizeLimit;
-(id)readStringBody:(int)arg1 ;
-(BOOL)strictWrite;
-(void)setMessageSizeLimit:(int)arg1 ;
@end

