/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaUUFRPresented.h>
@class SISchemaViewContainer, NSString, NSData;


@protocol SISchemaUUFRPresented <NSObject>
@property (nonatomic,retain) SISchemaViewContainer * viewContainer; 
@property (nonatomic,copy) NSString * errorDomain; 
@property (assign,nonatomic) int errorCode; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(id)arg1;
-(void)setErrorCode:(int)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setViewContainer:(id)arg1;
-(SISchemaViewContainer *)viewContainer;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class SISchemaViewContainer, NSString, NSData;

@interface SISchemaUUFRPresented : PBCodable <SISchemaUUFRPresented, NSSecureCoding> {

	int _errorCode;
	SISchemaViewContainer* _viewContainer;
	NSString* _errorDomain;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
@end

