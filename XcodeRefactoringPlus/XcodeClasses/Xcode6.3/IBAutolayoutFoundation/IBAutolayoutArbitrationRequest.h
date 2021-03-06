//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutArbitrationRequest : IBAutolayoutOperationRequest
{
    NSDictionary *_arbitrationOptions;
}

@property(readonly, nonatomic) NSDictionary *arbitrationOptions; // @synthesize arbitrationOptions=_arbitrationOptions;
- (void).cxx_destruct;
- (id)debugDescription;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;
- (id)initWithRepresentation:(id)arg1 layoutInfoClass:(Class)arg2 objectForObjectRepresentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithArbitrationUnit:(id)arg1 arbitrationOptions:(id)arg2;

@end