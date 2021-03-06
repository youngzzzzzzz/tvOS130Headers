/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVContentIdentifier.h>

@class Protocol, NSString;

@interface TVSourceContentIdentifier : TVContentIdentifier {

	Protocol* _sourcePublicProtocol;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier; 
@property (nonatomic,readonly) Protocol * sourcePublicProtocol;                     //@synthesize sourcePublicProtocol=_sourcePublicProtocol - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
-(Protocol *)sourcePublicProtocol;
-(NSString *)sourceBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2 ;
@end

