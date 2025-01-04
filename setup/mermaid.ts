import { defineMermaidSetup } from '@slidev/types'

export default defineMermaidSetup(() => {
    return {
        theme: 'base',
        // layout: 'default',
        // look: 'handDrawn',
        themeVariables: {
            
            primaryColor:"#fdfda6",
            primaryTextColor: "#333",
            primaryBorderColor: "black",
            secondaryColor:"#FFFF99",
            secondaryTextColor: "black",
            //secondaryBorderColor: "black",
            edgeLabelBackground: 'white',
            //tertiaryBorderColor:'black',
            activationBorderColor: 'black',
            //fontSize: '10px'
        }
    }
})