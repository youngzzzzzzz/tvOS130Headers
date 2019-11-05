/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaSpeechResultSelected.h>
@class NSString, NSData;


@protocol SISchemaSpeechResultSelected <NSObject>
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSource:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(int)source;
-(NSData *)jsonData;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSString, NSData;

@interface SISchemaSpeechResultSelected : PBCodable <SISchemaSpeechResultSelected, NSSecureCoding> {

	int _source;
	NSString* _resultCandidateId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) int source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSource:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end
