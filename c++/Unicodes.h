#pragma once
#include "Unicode.h"
#include <vector>


static Unicode basic_latin                  = Unicode(L"Basic Latin",0x0000,0x007F,0,127),
               latin_1_supplement           = Unicode(L"Latin-1 Supplement",0x0080,0x00FF,128,255),
               latin_extended_a             = Unicode(L"Latin Extended-A",0x0100,0x017F,256,383),
               latin_extended_b             = Unicode(L"Latin Extended-B",0x0180,0x024F,384,591),
               ipa_extensions               = Unicode(L"IPA Extensions",0x0250,0x02AF,592,687),
               spacing_modifier_letters     = Unicode(L"Spacing Modifier Letters",0x02B0,0x02FF,688,767),
               combining_diacritical_marks  = Unicode(L"Combining Diacritical Marks",0x0300,0x036F,768,879),
               greek                        = Unicode(L"Greek",0x0370,0x03FF,880,1023),
               cyrillic                     = Unicode(L"Cyrillic",0x0400,0x04FF,1024,1279),
               armenian                     = Unicode(L"Armenian",0x0530,0x058F,1328,1423),
               hebrew                       = Unicode(L"Hebrew",0x0590,0x05FF,1424,1535),
               arabic                       = Unicode(L"Arabic",0x0600,0x06FF,1536,1791),
               syriac                       = Unicode(L"Syriac",0x0700,0x074F,1792,1871),
               thaana                       = Unicode(L"Thaana",0x0780,0x07BF,1920,1983),
               devanagari                   = Unicode(L"Devanagari",0x0900,0x097F,2304,2431),
               bengali                      = Unicode(L"Bengali",0x0980,0x09FF,2432,2559),
               gurmukhi                     = Unicode(L"Gurmukhi",0x0A00,0x0A7F,2560,2687),
               gujarati                     = Unicode(L"Gujarati",0x0A80,0x0AFF,2688,2815),
               oriya                        = Unicode(L"Oriya",0x0B00,0x0B7F,2816,2943),
               tamil                        = Unicode(L"Tamil",0x0B80,0x0BFF,2944,3071),
               telugu                       = Unicode(L"Telugu",0x0C00,0x0C7F,3072,3199),
               kannada                      = Unicode(L"Kannada",0x0C80,0x0CFF,3200,3327),
               malayalam                    = Unicode(L"Malayalam",0x0D00,0x0D7F,3328,3455),
               sinhala                      = Unicode(L"Sinhala",0x0D80,0x0DFF,3456,3583),
               thai                         = Unicode(L"Thai",0x0E00,0x0E7F,3584,3711),
               lao                          = Unicode(L"Lao",0x0E80,0x0EFF,3712,3839),
               tibetan                      = Unicode(L"Tibetan",0x0F00,0x0FFF,3840,4095),
               myanmar                      = Unicode(L"Myanmar",0x1000,0x109F,4096,4255),
               georgian                     = Unicode(L"Georgian",0x10A0,0x10FF,4256,4351),
               hangul_jamo                  = Unicode(L"Hangul Jamo",0x1100,0x11FF,4352,4607),
               ethiopic                     = Unicode(L"Ethiopic",0x1200,0x137F,4608,4991),
               cherokee                     = Unicode(L"Cherokee",0x13A0,0x13FF,5024,5119),
     unified_canadian_aboriginal_syllabics  = Unicode(L"Unified Canadian Aboriginal Syllabics",0x1400,0x167F,5120,5759),
               ogham                        = Unicode(L"Ogham",0x1680,0x169F,5760,5791),
               runic                        = Unicode(L"runic",0x16A0,0x16FF,5792,5887),
               khmer                        = Unicode(L"Khmer",0x1780,0x17FF,6016,6143),
               mongolian                    = Unicode(L"Mongolian",0x1800,0x18AF,6144,6319),
               latin_extended_additional    = Unicode(L"Latin extended additional",0x1E00,0x1EFF,7680,7935),
               greek_extended               = Unicode(L"Greek Extended",0x1F00,0x1FFF,7936,8191),
               general_punctuation          = Unicode(L"General Punctuation",0x2000,0x206F,8192,8303),
               superscripts_and_subscripts  = Unicode(L"Superscripts and Subscripts",0x2070,0x209F,8304,8351),
               currency_symbols             = Unicode(L"Currency symbols",0x20A0,0x20CF,8352,8399),
               combining_marks_for_symbols  = Unicode(L"Combining Marks for Symbols",0x20D0,0x20FF,8400,8447),
               letterlike_symbols           = Unicode(L"Letterlike Symbols",0x2100,0x214F,8448,8527),
               number_forms                 = Unicode(L"number_forms",0x2150,0x218F,8528,8591),
               arrows                       = Unicode(L"Arrows",0x2190,0x21FF,8592,8703),
               mathematical_operators       = Unicode(L"Mathematical Operators",0x2200,0x22FF,8704,8959),
               miscellaneous_technical      = Unicode(L"Miscellaneous Technical",0x2300,0x23FF,8960,9215),
               control_pictures             = Unicode(L"Control Pictures",0x2400,0x243F,9216,9279),
               optical_character_recognition= Unicode(L"Optical Character Recognition",0x2440,0x245F,9280,9311),
               enclosed_alphanumerics       = Unicode(L"Enclosed alphanumerics",0x2460,0x24FF,9312,9471),
               box_drawing                  = Unicode(L"Box drawing",0x2500,0x257F,9472,9599),
               block_elements               = Unicode(L"Block elements",0x2580,0x259F,9600,9631),
               geometric_shapes             = Unicode(L"Geometric Shapes",0x25A0,0x25FF,9632,9727),
               miscellaneous_Symbols        = Unicode(L"Miscellaneous Symbols",0x2600,0x26FF,9728,9983),
               dingbats                     = Unicode(L"Dingbats",0x2700,0x27BF,9984,10175),
               braille_patterns             = Unicode(L"Braille Patterns",0x2800,0x28FF,10240,10495),
               cjk_radicals_supplement      = Unicode(L"CJK Radicals Supplement",0x2E80,0x2EFF,11904,12031),
               kangxi_radicals              = Unicode(L"Kangxi Radicals",0x2F00,0x2FDF,12032,12255),
     ideographic_description_characters     = Unicode(L"Ideographic Description Characters",0x2FF0,0x2FFF,12272,12287),
     cjk_symbols_and_punctuation            = Unicode(L"CJK Symbols and Puntuation",0x3000,0x303F,12288,12351),\
               Hiragana                     = Unicode(L"Hiragana",0x3040,0x309F,12352,12447),
               katakana                     = Unicode(L"Katakana",0x30A0,0x30FF,12448,12543),
               bopomofo                     = Unicode(L"Bopomofo",0x3100,0x312F,12544,12591),
               hangul_compatibility_jamo    = Unicode(L"Hangul Compatibility Jamo",0x3130,0x318F,12592,12687),
               kanbun                       = Unicode(L"Kanbun",0x3190,0x319F,12688,12703),
               bopomofo_extended            = Unicode(L"Bopomofo Extended",0x31A0,0x31BF,12704,12735),
        enclosed_cjk_letters_and_months     = Unicode(L"Enclosed CJK Letters and Months",0x3200,0x32FF,12800,13055),
               cjk_compatibility            = Unicode(L"CJK Compatibility",0x3300,0x33FF,13056,13311),
        cjk_unified_ideographs_extension_a  = Unicode(L"CJK Unified Ideographs Extension A",0x3400,0x4DB5,13312,19893),
               cjk_unified_ideographs       = Unicode(L"CJK Unified Ideographs",0x4E00,0x9FFF,19968,40959),
               yi_syllables                 = Unicode(L"Yi Syllables",0xA000,0xA48F,40960,42127),
               yi_radicals                  = Unicode(L"Yi Radicals",0xA490,0xA4CF,42128,42191),
               hangul_syllables             = Unicode(L"Hangul Syllables",0xAC00,0xD7A3,44032,55203),
               high_surrogates              = Unicode(L"High Surrogates",0xD800,0xDB7F,55296,56191),
               high_private_use_surrogates  = Unicode(L"High Private Use Surrogates",0xDB80,0xDBFF,56192,56319),
               low_surrogates               = Unicode(L"Low Surrogates",0xDC00,0xDFFF,56320,57343),
               private_use                  = Unicode(L"Private Use",0xE000,0xF8FF,57344,63743),
               cjk_compatibility_ideographs = Unicode(L"CJK Compability Ideographs",0xF900,0xFAFF,63744,64255),
               alphabetic_presentation_forms= Unicode(L"Alphabetic Presentation Forms",0xFB00,0xFB4F,64256,64335),
               arabic_presentation_forms_a  = Unicode(L"Arabic Presentation Forms-A",0xFB50,0xFDFF,64336,65023),
               combining_half_marks         = Unicode(L"Combining Half Marks",0xFE20,0xFE2F,65056,65071),
               cjk_compatibility_forms      = Unicode(L"CJK Compatibility Forms",0xFE30,0xFE4F,65072,65103),
               small_form_variants          = Unicode(L"Small Form Variants",0xFE50,0xFE6F,65104,65135),
               arabic_presentation_forms_b  = Unicode(L"Arabic Presentation Forms-B",0xFE70,0xFEFE,65136,65278),
               specials_                     = Unicode(L"Specials",0xFEFF,0xFEFF,65279,65279),
               halfwidth_and_fullwidth_forms= Unicode(L"Halfwidth and Fullwidth Forms",0xFF00,0xFFEF,65280,65519),
               specials                     = Unicode(L"Specials",0xFFF0,0xFFFD,65520,65533)
               ;
               

vector<Unicode> list(){
    vector<Unicode> list={
               basic_latin,
               latin_1_supplement,
               latin_extended_a,     
               latin_extended_b ,          
               ipa_extensions,               
               spacing_modifier_letters ,   
               combining_diacritical_marks ,
               greek,                       
               cyrillic ,                    
               armenian,                     
               hebrew,                      
               arabic ,                     
               syriac,                    
               thaana ,                      
               devanagari ,                
               bengali,                      
               gurmukhi ,                   
               gujarati,                     
               oriya,                        
               tamil,                        
               telugu,                       
               kannada ,                     
               malayalam  ,                  
               sinhala,                      
               thai,                         
               lao ,                         
               tibetan ,                     
               myanmar,                      
               georgian ,                    
               hangul_jamo ,                 
               ethiopic ,                    
               cherokee ,                    
     unified_canadian_aboriginal_syllabics ,
               ogham,                        
               runic,                        
               khmer,                        
               mongolian,                    
               latin_extended_additional,    
               greek_extended,               
               general_punctuation,         
               superscripts_and_subscripts, 
               currency_symbols,             
               combining_marks_for_symbols,  
               letterlike_symbols,           
               number_forms,                 
               arrows,                       
               mathematical_operators,       
               miscellaneous_technical,
               control_pictures,
               optical_character_recognition,
               enclosed_alphanumerics,
               box_drawing,
               block_elements,
               geometric_shapes,
               miscellaneous_Symbols,
               dingbats ,
               braille_patterns,
               cjk_radicals_supplement,
               kangxi_radicals,
     ideographic_description_characters,
     cjk_symbols_and_punctuation,
               Hiragana,
               katakana,
               bopomofo,
               hangul_compatibility_jamo,
               kanbun,
               bopomofo_extended,
        enclosed_cjk_letters_and_months,
               cjk_compatibility,
        cjk_unified_ideographs_extension_a,
               cjk_unified_ideographs,
               yi_syllables,
               yi_radicals,
               hangul_syllables,
               high_surrogates,
               high_private_use_surrogates,
               low_surrogates,
               private_use ,
               cjk_compatibility_ideographs,
               alphabetic_presentation_forms,
               arabic_presentation_forms_a,
               combining_half_marks,
               cjk_compatibility_forms,
               small_form_variants,
               arabic_presentation_forms_b,
               specials_ ,
               halfwidth_and_fullwidth_forms,
               specials

    };
    return list;

}