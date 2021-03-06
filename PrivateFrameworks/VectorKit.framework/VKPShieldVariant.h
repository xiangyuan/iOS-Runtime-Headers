/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPShieldVariant : PBCodable {
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _offsetX; 
        float _offsetY; 
        float _size; 
        struct { 
            unsigned int offsetX : 1; 
            unsigned int offsetY : 1; 
        } _has; 
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _width; 
    struct { 
        float _a; 
        unsigned int _b; 
        unsigned int _g; 
        unsigned int _r; 
    struct { 
        unsigned int textShadow : 1; 
        unsigned int textStroke : 1; 
        unsigned int fontColor : 1; 
        unsigned int centerOffsetX : 1; 
        unsigned int fontSize : 1; 
        unsigned int maxDigits : 1; 
        unsigned int minDigits : 1; 
        unsigned int textBaseLine : 1; 
    unsigned int _atlasIndex;
    float _centerOffsetX;
    } _fontColor;
    NSString *_fontName;
    float _fontSize;
    } _has;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    unsigned int _quadIndex;
    float _textBaseLine;
    } _textShadow;
    } _textStroke;
}

@property unsigned int atlasIndex;
@property float centerOffsetX;
@property struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; } fontColor;
@property(retain) NSString * fontName;
@property float fontSize;
@property BOOL hasCenterOffsetX;
@property BOOL hasFontColor;
@property(readonly) BOOL hasFontName;
@property BOOL hasFontSize;
@property BOOL hasMaxDigits;
@property BOOL hasMinDigits;
@property BOOL hasTextBaseLine;
@property BOOL hasTextShadow;
@property BOOL hasTextStroke;
@property unsigned int maxDigits;
@property unsigned int minDigits;
@property unsigned int quadIndex;
@property float textBaseLine;
@property struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; } textShadow;
@property struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; } textStroke;

- (unsigned int)atlasIndex;
- (float)centerOffsetX;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })fontColor;
- (id)fontName;
- (float)fontSize;
- (BOOL)hasCenterOffsetX;
- (BOOL)hasFontColor;
- (BOOL)hasFontName;
- (BOOL)hasFontSize;
- (BOOL)hasMaxDigits;
- (BOOL)hasMinDigits;
- (BOOL)hasTextBaseLine;
- (BOOL)hasTextShadow;
- (BOOL)hasTextStroke;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxDigits;
- (unsigned int)minDigits;
- (unsigned int)quadIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setAtlasIndex:(unsigned int)arg1;
- (void)setCenterOffsetX:(float)arg1;
- (void)setFontColor:(struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasCenterOffsetX:(BOOL)arg1;
- (void)setHasFontColor:(BOOL)arg1;
- (void)setHasFontSize:(BOOL)arg1;
- (void)setHasMaxDigits:(BOOL)arg1;
- (void)setHasMinDigits:(BOOL)arg1;
- (void)setHasTextBaseLine:(BOOL)arg1;
- (void)setHasTextShadow:(BOOL)arg1;
- (void)setHasTextStroke:(BOOL)arg1;
- (void)setMaxDigits:(unsigned int)arg1;
- (void)setMinDigits:(unsigned int)arg1;
- (void)setQuadIndex:(unsigned int)arg1;
- (void)setTextBaseLine:(float)arg1;
- (void)setTextShadow:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })arg1;
- (void)setTextStroke:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })arg1;
- (float)textBaseLine;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })textShadow;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })textStroke;
- (void)writeTo:(id)arg1;

@end
